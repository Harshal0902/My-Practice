#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (array[mid] == x)
            return mid;

        // Search the left half
        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);

        // Search the right half
        return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}

int main(void)
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

    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}

// Enter no. of elements: 5
// 45 55 65 75 85
// 55
// Element is found at index 1