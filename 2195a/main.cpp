#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num = 67;
    const int ONE = 1;

    vector<string> toPrnt;

    int cases = 0;

    cin >> cases;

    for (int i = 0; i < cases; i++)
    {

        int size;
        cin >> size;

        bool first = false;
        bool second = true;

        int element;

        for (int j = 0; j < size; j++)
        {
            cin >> element;

            if (element == num)
            {
                first = true;
            }
            else if (element == ONE)
            {
                second = true;
            }
        }

        if (first && second)
        {
            toPrnt.push_back("YES");
        }
        else
        {
            toPrnt.push_back("NO");
        }
    }

    for (const string &s : toPrnt)
    {
        cout << s << endl;
    }
}