#include <iostream>
using namespace std;

// Function to merge two sorted arrays
void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    // Compare both halves
    while(i <= mid && j <= right)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left half
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while(j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for(i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}

// Recursive Merge Sort
void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;

    // Take size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    // Take array elements
    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Display sorted array
    cout << "\nSorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}