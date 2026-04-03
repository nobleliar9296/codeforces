#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int continous(vector<char> arr)
{

    int count = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] != arr[i])
        {
            count++;
        }
    }

    return count;
}

int solve(vector<char> arr)
{

    int biggest = continous(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        char temp = arr.back();
        arr.pop_back();
        arr.insert(arr.begin(), temp);

        int num = continous(arr);

        if (num > biggest)
        {
            biggest = num;
        }
    }

    return biggest;
}

int main()
{

    int cases;

    cin >> cases;

    int length;

    vector<int> output;

    while (cases > 0)
    {

        cin >> length;

        string temp;
        cin >> temp;

        vector<char> arr(temp.begin(), temp.end());

        // call the function to solve the problem
        output.push_back(solve(arr));

        cases--;
    }

    for (auto x : output)
    {
        cout << x << "\n";
    }

    return 0;
}