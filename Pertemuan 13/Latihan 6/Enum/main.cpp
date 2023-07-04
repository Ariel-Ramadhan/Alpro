////////////////////
///Ariel Ramadhan///
///A11.2022.14297///
///4207          ///
////////////////////


#include <iostream>

using namespace std;

enum ews{vipers, spectra=10, epawss=100};

int main()
{
    ews type;

    type = spectra;

    if (type == spectra){
        cout << "the early warning system is spectra" << endl;
    }

    cout << type << endl;

    return 0;
}
