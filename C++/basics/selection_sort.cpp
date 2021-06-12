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

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Printing output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Enter no. of elements: 5
// 45 85 65 25 75
// 25 45 65 75 85