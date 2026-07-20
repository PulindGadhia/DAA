#include <iostream>
using namespace std;

int main()
{
    int n;

    // Take size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Take array elements
    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        // Find smallest element
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        // Swap current and minimum element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Display sorted array
    cout << "\nSorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}