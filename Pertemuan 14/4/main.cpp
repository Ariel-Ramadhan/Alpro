#include <iostream>
#include <chrono>

using namespace std;
int Search(int arr[], int i, int size)
{
    for(int j = 0; j < size; j++)
    {
        if(arr[j] == i)
        {
            return i;
        }
    }
    return -1;

}

int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8};
    int size = sizeof(arr) / sizeof(int);
    int x = 7;
    auto start = chrono::steady_clock::now();

    int hasil = Search (arr, x, size);

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
