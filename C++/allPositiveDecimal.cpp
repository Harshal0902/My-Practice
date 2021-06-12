#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter numbers to ber reverse: ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        cout << rem << " \n ";
        n = n / 10;
    }
    return 0;
}

// Enter a number: 55668
// 8 6 6 5 5