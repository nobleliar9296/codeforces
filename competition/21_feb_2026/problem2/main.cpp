#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct steps
{
    int num_steps;
    vector<int> actions;
};

// we will solve it here and store the steps starting for 1..
steps solve(vector<char> *arr)
{

    steps to_rtn;

    int count = 0;

    for (int i = 0; i < arr->size(); i++)
    {
        if ((*arr)[i] == '1')
        {
            count++;
        }
    }

    if (2 * count >= arr->size())
    {
        // solve the problem
    }
    else
    {
        to_rtn.actions = -1;
    }

    return steps();
}

vector<char> *permute(int *arr)
{
}

int main()
{

    int count;

    string prob;

    vector<steps> output;

    cin >> count;

    while (count > 0)
    {

        cin >> prob;

        vector<char> *bits = new vector<char>(prob.begin(), prob.end());

        output.push_back(solve(bits));

        count--;
    }

    return 0;
}
