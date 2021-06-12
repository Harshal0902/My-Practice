// Armstrong Number:
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 9 = 153

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter numbers: ";
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }

    return 0;
}

// Enter numbers: 153
// Armstrong number