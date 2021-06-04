#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "Both the numbers are equal";
    }
    else
    {
        if (x > y)
        {
            cout << "X is > Y";
        }
        else
        {
            cout << "Y is > X";
        }
    }
    return 0;
}

// 2 5
// Y is > X