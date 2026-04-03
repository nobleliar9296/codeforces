#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

void search(set<int> arr, int k, int n)
{
    if (k == n + 1)
    {
        // process subset or do computation
        for (auto temp : arr)
        {
            cout << temp << " ";
        }
        cout << endl;
    }
    else
    {
        arr.insert(k);
        search(arr, k + 1, n);
        arr.erase(k);
        search(arr, k + 1, n);
    }
}

void iter(vector<int> arr)
{
    int n = arr.size();
    int max_mask = 1 << n;

    for (int i = 1; i <= max_mask; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4};
    set<int> sets;

    iter(arr);

    return 0;
}
