#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef struct Mahasiswa {
    char nim[15];
    char nama[10];
    char jurusan[21];
    int lulus;
} mhs;

int main() {
    // array statis
    cout << "Array Statis" << endl;
    mhs data[4];
    for (int i = 0; i < 4; i++) {
        cout << "Masukkan data baris ke-" << i+1 << endl;
        cin >> data[i].nim >> data[i].nama >> data[i].jurusan >> data[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl;
    for (int i = 0; i < 4; i++) {
        cout << data[i].nim << "\t" << data[i].nama << "\t" << data[i].jurusan << "\t" << data[i].lulus << endl;
    }

    cout << "==================================================================" << endl;

    // array dinamis
    cout << "Array Dinamis" << endl;
    int n;
    cout << "Masukkan banyak elemen array: ";
    cin >> n;
    mhs* dataDin = new mhs[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data baris ke-" << i+1 << endl;
        cin >> dataDin[i].nim >> dataDin[i].nama >> dataDin[i].jurusan >> dataDin[i].lulus;
    }

    cout << "NIM \t\t Nama \t Jurusan \t Tahun Lulus" << endl;
    for (int i = 0; i < n; i++) {
        cout << dataDin[i].nim << "\t" << dataDin[i].nama << "\t" << dataDin[i].jurusan << "\t" << dataDin[i].lulus << endl;
    }

    delete[] dataDin;

    return 0;
}
