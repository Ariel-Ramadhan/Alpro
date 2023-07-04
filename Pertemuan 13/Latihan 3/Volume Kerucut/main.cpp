////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////

///////////////////////////////////////////////////
///Menghitung Volume Kerucut menggunakan Typedef///
///////////////////////////////////////////////////

#include <iostream>

using namespace std;

struct Vol{
    int tinggi;
    int jari;
    float L;
};

void hitung(Vol r){
    r.L = ((22.0/7.0) * r.jari * r.jari * r.tinggi)/3;
    cout << "Volume Kerucut = " << r.L << " cm3\n";
}

typedef struct Vol VolumeKerucut;

int main()
{
    cout << "///////////////////////////////\n";
    cout << "///Menghitung Volume Kerucut///\n";
    cout << "///////////////////////////////\n";
    cout <<endl ;
    VolumeKerucut r;
    cout << "Masukan Tinggi : ";
    cin >> r.tinggi;
    cout << "Masukan Jari-Jari : ";
    cin >> r.jari;

    hitung(r);

    return 0;
}
