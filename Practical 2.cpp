#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

// Linear Search
int linearSearch(vector<int> a, int key)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == key)
            return i;
    }

    return -1;
}

// Binary Search
int binarySearch(vector<int> a, int key)
{
    int low = 0;
    int high = a.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;

        if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n = 100000;

    vector<int> a(n);

    // Create sorted array
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    auto start = high_resolution_clock::now();

    int result = linearSearch(a, key);

    auto end = high_resolution_clock::now();

    cout << "\nLinear Search" << endl;

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Time: "
         << duration_cast<microseconds>(end - start).count()
         << " microseconds" << endl;


    // Binary Search
    start = high_resolution_clock::now();

    result = binarySearch(a, key);

    end = high_resolution_clock::now();

    cout << "\nBinary Search" << endl;

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Time: "
         << duration_cast<microseconds>(end - start).count()
         << " microseconds" << endl;

    return 0;
}
