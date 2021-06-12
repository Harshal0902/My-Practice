#include <iostream>
using namespace std;

int search(int array[], int n, int x)
{

    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int x;
    cin >> x;

    cout << "Element found on index: " << search(array, n, x) << endl;
}

// Enter no. of elements: 5
// 10 20 30 40 50
// 20
// Element found on index: 1