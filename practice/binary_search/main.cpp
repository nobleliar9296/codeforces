

int binary_search(int target, int *arr, int lo, int high)
{

    if (lo > high)
    {
        return -1;
    }

    // the case when we narrowed it to one element
    if (lo == high)
    {
        // if we did not find it
        if (arr[high] != target)
        {
            return -1;
        }
        else
        {
            // it would be the element
            return lo;
        }
    }

    int mid = lo + ((high - lo) / 2);

    // for debugging
    // cout << lo << " " << mid << " " << high << "\n";

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binary_search(target, arr, mid + 1, high);
    }
    else
    {
        return binary_search(target, arr, lo, mid - 1);
    }
}

int main()
{

    int size = 10000;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    int test = binary_search(1000000, arr, 0, size - 1);

    test--;

    delete[] arr;
}