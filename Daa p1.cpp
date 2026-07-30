
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void merge(int a[], int left, int mid, int right)
{
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= right)
    {
        if(a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while(j <= right)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(i = left, k = 0; i <= right; i++, k++)
    {
        a[i] = temp[k];
    }
}

void mergeSort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main()
{
    int original[] = {64, 25, 12, 22, 11};
    int n = 5;

    int a[100];

    cout << "Original Array: ";
    printArray(original, n);

    for(int i = 0; i < n; i++)
        a[i] = original[i];

    bubbleSort(a, n);
    cout << "Bubble Sort: ";
    printArray(a, n);

    for(int i = 0; i < n; i++)
        a[i] = original[i];

    selectionSort(a, n);
    cout << "Selection Sort: ";
    printArray(a, n);

    for(int i = 0; i < n; i++)
        a[i] = original[i];

    insertionSort(a, n);
    cout << "Insertion Sort: ";
    printArray(a, n);

    for(int i = 0; i < n; i++)
        a[i] = original[i];

    mergeSort(a, 0, n - 1);
    cout << "Merge Sort: ";
    printArray(a, n);

    for(int i = 0; i < n; i++)
        a[i] = original[i];

    quickSort(a, 0, n - 1);
    cout << "Quick Sort: ";
    printArray(a, n);

    return 0;
}