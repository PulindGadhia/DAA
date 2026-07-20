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

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            // Swap if left element is greater
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "\nSorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}