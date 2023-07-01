#include <iostream>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;

    void printInfo() {
        cout << "Merk  : " << merk << endl;
        cout << "Type  : " << type << endl;
        cout << "Tahun : " << tahun << endl;
        cout << "Harga : " << harga << endl;
    }
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->merk = "bmx";
    ptrSepeda->type = "Sepeda freestyle";
    ptrSepeda->tahun = 2012;
    ptrSepeda->harga = "1.000.000";

    ptrSepeda->printInfo();

    return 0;
}
