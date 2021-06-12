#include <iostream>
using namespace std;

int main()
{
    // Taking input from user
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // Printing output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Enter no. of elements: 5
// 45 85 25 65 96
// 25 45 65 85 96