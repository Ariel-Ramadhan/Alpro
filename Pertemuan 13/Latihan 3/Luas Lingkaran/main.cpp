////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////

//////////////////////////////////////////////////
///Menghitung Luas Lingkaran menggunakan Typdef///
//////////////////////////////////////////////////

#include <iostream>

using namespace std;
struct Val {
    int jari;
    float hasil;
};

void hitung(Val r){
    cout << "Hitung : 22/7 x " << r.jari << " x " << r.jari << endl;
    r.hasil = (22.0/7.0) * r.jari * r.jari;
    cout << "Luas Lingkaran = " << r.hasil << endl;
}

typedef struct Val LuasLingkaran;

int main()
{
    LuasLingkaran r;
    cout << "///////////////////////////////\n";
    cout << "///Menghitung Luas Lingkaran///\n";
    cout << "///////////////////////////////\n";
    cout <<endl ;
    cout << "Masukan Jari-Jari : ";
    cin >> r.jari;

    hitung(r);



    return 0;
}
