#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;

struct Bentuk {
    int panjang;
    int lebar;
    int jariJari;
    int tinggi;
};

// Menghitung luas persegi panjang
int hitungLuasPersegiPanjang(const Bentuk& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

// Menghitung luas lingkaran
double hitungLuasLingkaran(const Bentuk& lingkaran) {
    return PI * lingkaran.jariJari * lingkaran.jariJari;
}

// Menghitung volume kerucut
double hitungVolumeKerucut(const Bentuk& kerucut) {
    return (1.0 / 3.0) * PI * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

// Menghitung volume bola
double hitungVolumeBola(const Bentuk& bola) {
    return (4.0 / 3.0) * PI * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    Bentuk persegiPanjang;
    persegiPanjang.panjang = 5;
    persegiPanjang.lebar = 3;

    Bentuk lingkaran;
    lingkaran.jariJari = 2;

    Bentuk kerucut;
    kerucut.jariJari = 4;
    kerucut.tinggi = 6;

    Bentuk bola;
    bola.jariJari = 2;

    // Menghitung dan mencetak hasil
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
