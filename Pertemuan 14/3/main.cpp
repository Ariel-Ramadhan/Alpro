#include <iostream>
#include <chrono>

using namespace std;

void printArray(int arr[], int size)
{
    for(int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(int);
    auto start = chrono::steady_clock::now();

    selectionSort (arr, size);

    printArray (arr, size);

    cout << endl;
    auto end = chrono::steady_clock::now();

    cout << "Took : " << chrono::duration <double, milli>(end - start).count() << " ms" << endl;
    cout << "Space : " << sizeof(arr) + sizeof(size) + sizeof(start) + sizeof(end) << " bytes" << endl;

    return 0;
}
