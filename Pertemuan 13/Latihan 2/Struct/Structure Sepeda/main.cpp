////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////


#include <iostream>

using namespace std;

struct i{
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};
int main()
{
    i Sepeda;
    Sepeda.Merk = "Polygon";
    Sepeda.Type = "Sepeda Gunung";
    Sepeda.Tahun = 2013;
    Sepeda.Harga = "2.000.000";

    cout << Sepeda.Harga;

    return 0;
}
