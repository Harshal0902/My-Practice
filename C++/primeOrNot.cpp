// Check werther given number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        { //found a factor of n
            cout << "Not a Prime Number" << endl;
            break;
        }
    }
    if (i == n)
    { //loop has completed all iterations
        cout << "Prime Number" << endl;
    }
    return 0;
}

// 8
// Not a Prime Number