////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////

///////////////////////////////////////////////
///Menghitung Volume Bola menggunakan Struct///
///////////////////////////////////////////////

#include <iostream>

using namespace std;

struct Vol {
    int jari;
    float hasil;
};

void hitung(Vol r){
    r.hasil = (4.0/3.0) * (22.0/7.0) *r.jari * r.jari * r.jari;
    cout << "Volume Bola = " << r.hasil << " cm3\n";
}
int main()
{
    cout << "////////////////////////////\n";
    cout << "///Menghitung Volume Bola///\n";
    cout << "////////////////////////////\n";
    cout <<endl ;
    Vol r;
    cout << "Masukan Jari-Jari : ";
    cin >> r.jari;

    hitung(r);

    return 0;
}
