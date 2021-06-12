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

    // Bubble Sort
    int counter = 0;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    // Printing output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Enter no. of elements: 5
// 45 85 65 455 12
// 12 45 65 85 455