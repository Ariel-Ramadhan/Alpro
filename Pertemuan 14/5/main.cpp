#include <iostream>
#include <chrono>

using namespace std;

int Search(int arr[], int x, int low, int high)
{
    if(high >= low)
    {
        int mid = low + (high - low)/2;
        if(mid == x)
        {
            return x;
        }
        if(mid > x)
        {
            return -1;
        }
    }
}
int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8};
    int size = sizeof(arr) / sizeof(int);
    int x = 7;
    auto start = chrono::steady_clock::now();
    int hasil = Search (arr, x, 0, size - 1);


    if(hasil == -1){
        cout << "element not found";
    } else {
        cout << hasil << " has found";
    }


    cout << endl;
    auto end = chrono::steady_clock::now();

    cout << "Took : " << chrono::duration <double, milli>(end - start).count() << " ms" << endl;
    cout << "Space : " << sizeof(arr) + sizeof(size) + sizeof(start) + sizeof(end) << " bytes" << endl;
    return 0;
}
