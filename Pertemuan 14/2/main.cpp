#include <iostream>
#include <chrono>

using namespace std;

void printArray(int arr[], int size)
{
    for(int l = 0; l < size; l++)
    {
        cout << " " << arr[l];
    }
}


void insertionSort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(int);
    auto start = chrono::steady_clock::now();

    insertionSort (arr, size);

    printArray (arr, size);

    cout << endl;
    auto end = chrono::steady_clock::now();

    cout << "Took : " << chrono::duration <double, milli>(end - start).count() << " ms" << endl;
    cout << "Space : " << sizeof(arr) + sizeof(size) + sizeof(start) + sizeof(end) << " bytes" << endl;

    return 0;

}
