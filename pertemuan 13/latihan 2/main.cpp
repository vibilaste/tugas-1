#include <iostream>

using namespace std;
struct sepeda {
string merk = "bmx";
string type = "sepeda freestyle";
int tahun = 2012;
string harga = "1.000.000";

};
int main()
{
    cout << "Latihan 2" << endl;
    sepeda sepedaX;
    cout <<"Merk sepeda  :"<<sepedaX.merk << endl;
    cout <<"Tipe sepeda  :"<<sepedaX.type << endl;
    cout <<"Tahun sepeda :"<<sepedaX.tahun << endl;
    cout <<"Harga sepeda :"<< sepedaX.harga<< endl;

    return 0;
}
