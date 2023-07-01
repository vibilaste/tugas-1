#include <iostream>
using namespace std;

enum Arah { UTARA, TIMUR, SELATAN, BARAT };

enum Cuaca {
    CERAH,
    BERAWAN,
    HUJAN,
    BADAI
};
int main() {
     Cuaca cuacaHariIni = CERAH;
    if (cuacaHariIni == CERAH) {
        cout << "Cuaca cerah" << endl;
    } else if (cuacaHariIni == BERAWAN) {
        cout << "Cuaca berawan" << endl;
    } else if (cuacaHariIni == HUJAN) {
        cout << "Hujan" << endl;
    } else if (cuacaHariIni == BADAI) {
        cout << "Badai" << endl;
    }

    return 0;
}
