#include <iostream>
#include <unordered_map>

using namespace std;

struct dict
{
    int num;
    int freq;
};

int main()
{
    int num;

    cin >> num;

    unordered_map<int, int> freq;
    int temp;

    // iterate and get the array
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        freq[temp]++;
    }

    // solving the array

    dict biggest = {0, 0};
    for (const auto &[key, value] : freq)
    {
        if (value > biggest.freq)
        {
            biggest.freq = value;
            biggest.num = key;
        }
    }

    if (biggest.freq > static_cast<int>(num / 2))
    {
        cout << biggest.num << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}