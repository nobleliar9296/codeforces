#include <iostream>

using namespace std;

struct color
{
    int num;
    int color;
};

int main()
{

    int count;

    cin >> count;

    color arr[count];

    // we will use mod
    int curr = 0;

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i].num;
        arr[i].color = curr % 2;
    }

    return 0;
}