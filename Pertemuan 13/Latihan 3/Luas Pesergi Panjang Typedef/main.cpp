////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////

////////////////////////////////////////////////////////
///Menghitung Luas Pesergi Panjang menggunakan Typedef///
////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

struct Val {
    int panjang;
    int lebar;
    int hasil;
};

void hitung(Val i){
    cout << "Hitung : " << i.panjang << " x " << i.lebar << endl;
    i.hasil = i.panjang * i.lebar;
    cout << "Luas Pesergi Panjang = "<< i.hasil <<  endl;
}

typedef struct Val LuPePa;

int main()
{
    LuPePa i;
    cout << "/////////////////////////////////////\n";
    cout << "///Menghitung Luas Pesergi Panjang///\n";
    cout << "/////////////////////////////////////\n";
    cout <<endl ;

    cout << "Masukan Panjang : ";
    cin >> i.panjang;

    cout << "Masukan Lebar : ";
    cin >> i.lebar;


    hitung(i);



    return 0;
}
