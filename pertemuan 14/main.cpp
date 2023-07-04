#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Bubble Ascending
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Insertion Descending
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
        while (key > array[j] && j >= 0) {
        array[j + 1] = array[j];
        --j;
        }
        array[j + 1] = key;
    }
}


void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high)
{

    int pivot = array[high];

    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

int c=0;
// Quick Ascending
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
    c++;
}

int linearSearch(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

template<typename Fungsi>
double TimeComplexity(Fungsi&& function) {
    auto start = chrono::high_resolution_clock::now();
    function();
    auto end = chrono::high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    return duration.count();
}

int constanttime(int var){
    return (var*4)+4;
}

int lineartime(int var,int n){

    return (var*4)+(var*4)*n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {8, 2, 19, 5, 7, 1, 8, 10, 16, 92,
                    9, 3, 6, 12, 72, 89, 99, 11, 4, 14};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x = 9;

    double BubbleTime = TimeComplexity([&]() {
        bubble(arr,n);
    });
    cout << "Bubble Sort Time  \t: " << BubbleTime << " microsecond" << endl;//di perangkat saya 5 microsecond
    cout << "Bubble Sort O(1) Space \t: " << constanttime(3) << " Byte" << endl;

    double InsertionSort = TimeComplexity([&]() {
        insertionSort(arr,n);
    });
    cout << "Insertion Sort Time \t: " << InsertionSort << " microsecond" << endl;//di perangkat saya 2 microsecond
    cout << "Insertion O(1) Space\t: " << constanttime(4) << " Byte" << endl;

    double QuickTime = TimeComplexity([&]() {
        quickSort(arr,0, n - 1);
    });
    cout << "Quick Sort Time \t: " << QuickTime << " microsecond" << endl;//di perangkat saya 2 microsecond
    cout << "Quick Sort O(n) Space\t: " << lineartime(3,c) << " Byte" << endl;

    double LinearTime = TimeComplexity([&]() {
        linearSearch(arr,n, x);
    });
    cout << "Linear Search Time\t: " << LinearTime << " microsecond" << endl;//di perangkat saya 0 microsecond
    cout << "Linear Search O(n)Space\t: " << constanttime(3) << " Byte" << endl;

    double BinaryTime = TimeComplexity([&]() {
        binarySearch(arr, 0, n - 1, x);
    });
    cout << "Binary Search Time\t: " << BinaryTime << " microsecond" << endl;//di perangkat saya 0 microsecond
    cout << "Binary Search O(n)Space\t: " << constanttime(4) << " Byte" << endl;

    return 0;
}
