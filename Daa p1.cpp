#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

void bubbleSort(vector<int> &a)
{
    int n = a.size();

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void selectionSort(vector<int> &a)
{
    int n = a.size();

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        swap(a[i], a[min]);
    }
}

void insertionSort(vector<int> &a)
{
    int n = a.size();

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

void merge(vector<int> &a, int left, int mid, int right)
{
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while(i <= mid && j <= right)
    {
        if(a[i] < a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while(i <= mid)
        temp.push_back(a[i++]);

    while(j <= right)
        temp.push_back(a[j++]);

    for(int k = 0; k < temp.size(); k++)
        a[left + k] = temp[k];
}

void mergeSort(vector<int> &a, int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    return i + 1;
}

void quickSort(vector<int> &a, int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int n = 100;

    vector<int> arr(n);
    vector<int> temp;

    srand(time(0));

    for(int i = 0; i < n; i++)
        arr[i] = rand() % 1000;

    cout << "Number of Elements = " << n << endl << endl;

    temp = arr;
    auto start = high_resolution_clock::now();
    bubbleSort(temp);
    auto stop = high_resolution_clock::now();
    cout << "Bubble Sort Time    : " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;

    temp = arr;
    start = high_resolution_clock::now();
    selectionSort(temp);
    stop = high_resolution_clock::now();
    cout << "Selection Sort Time : " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;

    temp = arr;
    start = high_resolution_clock::now();
    insertionSort(temp);
    stop = high_resolution_clock::now();
    cout << "Insertion Sort Time : " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;

    temp = arr;
    start = high_resolution_clock::now();
    mergeSort(temp, 0, n - 1);
    stop = high_resolution_clock::now();
    cout << "Merge Sort Time     : " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;

    temp = arr;
    start = high_resolution_clock::now();
    quickSort(temp, 0, n - 1);
    stop = high_resolution_clock::now();
    cout << "Quick Sort Time     : " << duration_cast<microseconds>(stop - start).count() << " microseconds" << endl;

    return 0;
}
