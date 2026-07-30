#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int key;

    cout << "Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    int result;

    result = linearSearch(a, n, key);

    if(result != -1)
        cout << "Linear Search: Element found at index " << result << endl;
    else
        cout << "Linear Search: Element not found" << endl;

    result = binarySearch(a, n, key);

    if(result != -1)
        cout << "Binary Search: Element found at index " << result << endl;
    else
        cout << "Binary Search: Element not found" << endl;

    return 0;
}