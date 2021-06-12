#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Print Half Pyramid Pattern using Stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    //  Enter the number of rows: 5
    //  *
    //  *  *
    //  *  *  *
    //  *  *  *  *
    //  *  *  *  *  *

    // Print Inverted Half Pyramid Pattern using Stars
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    //     Enter the number of rows: 5
    //  *  *  *  *  *
    //  *  *  *  *
    //  *  *  *
    //  *  *
    //  *

    // Print Half Pyramid after 180 degree rotation
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    //     Enter the number of rows: 5
    //      *
    //     *  *
    //    *  *  *
    //   *  *  *  *
    //  *  *  *  *  *

    // Print Half Pyramid using numbers
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    // Enter the number of rows: 5
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // Print Inverted Half Pyramid using numbers
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    //     Enter the number of rows: 5
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // Print Half Pyramid using numbers - 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    //     Enter the number of rows: 5
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    return 0;
}