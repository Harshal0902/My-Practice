// Write a program to print all prime numbers in a given range

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            { //it is not prime
                break;
            }
        }
        if (i == num)
        { //loop has completed all iterations
            cout << num << endl;
        }
    }
    return 0;
}

// Enter 2 numbers: 0 25
// 2 3 5 7 11 13 17 19 23