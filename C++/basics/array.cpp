#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);
    }

    cout << maxNum << " " << minNum << endl;

    return 0;
}

// Enter the size of an array: 5
// 545 4564654 45465 5454 4546
// 4564654 545