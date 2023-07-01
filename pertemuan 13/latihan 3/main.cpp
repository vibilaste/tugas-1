#include <iostream>

using namespace std;

const double PI = 3.14;

typedef struct {
    int luaspersegipanjang(int panjang, int lebar) {
        return panjang * lebar;
    }
    int luaslingkaran(int r) {
        return (22 * r * r) / 7;
    }
    double volumekerucut(int r, int t) {
        return (1.0 / 3.0) * PI * r * r * t;
    }
    double volumebola(int r) {
        return (4.0 * PI * r * r * r);
    }
} hitung;

int main() {
    hitung rumus;
    int p, r, t, l;
    cout << "Latihan 3" << endl;
    cout << "masukkan jari-jari (r) : ";
    cin >> r;
    cout << "masukkan panjang (p)   : ";
    cin >> p;
    cout << "masukkan lebar (l)     : ";
    cin >> l;
    cout << "masukkan tinggi (t)    : ";
    cin >> t;

    cout << "Luas persegi panjang : " << rumus.luaspersegipanjang(p, l) << endl;

    cout << "Luas lingkaran       : " << rumus.luaslingkaran(r) << endl;

    cout << "Volume kerucut       : " << rumus.volumekerucut(r, t) << endl;

    cout << "Volume bola          : " << rumus.volumebola(r) << endl;
    return 0;
}
