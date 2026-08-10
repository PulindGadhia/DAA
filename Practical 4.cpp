#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Iterative Factorial
long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// Recursive Factorial
long long factorialRecursive(int n)
{
    if (n <= 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Iterative
    auto start = high_resolution_clock::now();

    long long result1 = factorialIterative(n);

    auto end = high_resolution_clock::now();

    cout << "\nIterative Factorial = " << result1 << endl;
    cout << "Time = "
         << duration_cast<nanoseconds>(end - start).count()
         << " ns" << endl;


    // Recursive
    start = high_resolution_clock::now();

    long long result2 = factorialRecursive(n);

    end = high_resolution_clock::now();

    cout << "\nRecursive Factorial = " << result2 << endl;
    cout << "Time = "
         << duration_cast<nanoseconds>(end - start).count()
         << " ns" << endl;

    return 0;
}
