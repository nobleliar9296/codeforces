#include <iostream>
#include <algorithm>

using namespace std;

struct PlaceHolder
{
    int id;
    // can have other fields;
};

// comparing the placeHolder object to each other
// we can also change the comparision as it fits our needs.
struct Compare
{
    int operator()(const PlaceHolder &a, const PlaceHolder &b) const
    {
        return a.id < b.id;
    };
};

template <typename T, typename Compare>
int binary_search(T *arr, const T &target, int lo, int high, Compare comp)
{

    if (lo > high)
    {
        return -1;
    }

    if (lo == high)
    {
        // if it is what we are looking for.
        if (!comp(arr[lo], target) && !comp(target, arr[lo]))
        {
            return lo;
        }
        else
        {
            return -1;
        }
    }

    int mid = lo + (high - lo) / 2;

    // the value is less (to the left)
    if (comp(target, arr[mid]))
    {
        return binary_search(arr, target, lo, mid - 1, comp);
    }
    // the value if more (to the right)
    else if (comp(arr[mid], target))
    {
        return binary_search(arr, target, mid + 1, high, comp);
    }
    // the value is the current one.
    else if (!comp(arr[mid], target) && !comp(target, arr[mid]))
    {
        return mid;
    }

    return -1;
}

int main()
{

    int size = 10;
    PlaceHolder *arr = new PlaceHolder[10];

    for (int i = 0; i < size; i++)
    {
        arr[i].id = i;
    }

    PlaceHolder target;
    target.id = 10;

    cout << binary_search(arr, target, 0, size - 1, Compare()) << endl;

    delete[] arr;

    return 0;
}