#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

long long factorialRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    cout << "Enter a non-negative integer (e.g., 20): ";
    cin >> n;

    // Iterative
    auto start = high_resolution_clock::now();

    long long iterativeResult = 1;

    for (int i = 1; i <= n; i++)
    {
        iterativeResult = iterativeResult * i;
    }

    auto end = high_resolution_clock::now();

    long long iterativeTime =
        duration_cast<nanoseconds>(end - start).count();

    // Recursive
    start = high_resolution_clock::now();

    long long recursiveResult = factorialRecursive(n);

    end = high_resolution_clock::now();

    long long recursiveTime =
        duration_cast<nanoseconds>(end - start).count();

    cout << "\n--- Results for " << n << "! ---\n";

    cout << "Iterative Result : " << iterativeResult << endl;
    cout << "Iterative Time   : " << iterativeTime << " ns" << endl;

    cout << "---------------------------\n";

    cout << "Recursive Result : " << recursiveResult << endl;
    cout << "Recursive Time   : " << recursiveTime << " ns" << endl;

    return 0;
}