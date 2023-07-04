////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////


#include <iostream>

using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string jurusan;
    int tahun;
};
int main()
{
    mahasiswa mhs[4];

    mhs[0].nim = "A11.2022.01234";
    mhs[0].nama = "Andi";
    mhs[0].jurusan = "Broadcasting";
    mhs[0].tahun = 2023;

    mhs[1].nim = "A11.2022.01234";
    mhs[1].nama = "Budi";
    mhs[1].jurusan = "Sistem Infromasi";
    mhs[1].tahun = 2013;

    mhs[2].nim = "A11.2022.01234";
    mhs[2].nama = "Ali";
    mhs[2].jurusan = "DKV";
    mhs[2].tahun = 2003;

    mhs[3].nim = "A11.2022.01234";
    mhs[3].nama = "Siti";
    mhs[3].jurusan = "Kesehatan";
    mhs[3].tahun = 1993;


    cout << "Nim : " << mhs[0].nim << endl;
    cout << "Nama : " << mhs[0].nama << endl;
    cout << "Jurusan : " << mhs[0].jurusan << endl;
    cout << "Tahun : " << mhs[0].tahun << endl;
    cout << endl;

    cout << "Nim : " << mhs[1].nim << endl;
    cout << "Nama : " << mhs[1].nama << endl;
    cout << "Jurusan : " << mhs[1].jurusan << endl;
    cout << "Tahun : " << mhs[1].tahun << endl;
    cout << endl;

    cout << "Nim : " << mhs[2].nim << endl;
    cout << "Nama : " << mhs[2].nama << endl;
    cout << "Jurusan : " << mhs[2].jurusan << endl;
    cout << "Tahun : " << mhs[2].tahun << endl;
    cout << endl;

    cout << "Nim : " << mhs[3].nim << endl;
    cout << "Nama : " << mhs[3].nama << endl;
    cout << "Jurusan : " << mhs[3].jurusan << endl;
    cout << "Tahun : " << mhs[3].tahun << endl;
    cout << endl;

    return 0;
}
