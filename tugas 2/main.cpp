/*
    nama : ade vibilaste / a11.2022.14272 / kelompok 4107

    {Program untuk menentukan isEven, isOdd, isFactor, maxN, minN, maxArray, minArray, isFound, dan swapN}

*/
#include <iostream>

using namespace std;

//Deklarasi Fungsi dan Prosedur

bool isEven (int x);
bool isOdd (int x);
bool isFactor(int x, int y);
int maxN(int a,int b);
int minN(int a, int b);
int maxArray(int a[]);
int minArray(int a[]);
bool isFound(int x, int a[]);
void swapN(int a,int b);
int jumlah;
void Array(int myArray[]);

int main()
{
    //Kamus
    int a,b,n;

    //Algoritma
    cout << "Program untuk menentukan isEven, isOdd, isFactor, maxN, minN" << endl;
    cout << "==========================================================" << endl;
    cout << "Masukkan 2 bilangan untuk melanjutkan program : ";
    cin >> a;
    cin >> b;
    cout << "==========================================================" << endl;

    cout << "Bilangan "<< a <<" merupakan bilangan genap?\t\t\t: " << isEven(a) << endl;
    cout << "Bilangan "<< b <<" merupakan bilangan genap?\t\t\t: " << isEven(b) << endl;

    cout << "Bilangan "<< a <<" merupakan bilangan ganjil?\t\t\t: " << isOdd(a) << endl;
    cout << "Bilangan "<< b <<" merupakan bilangan ganjil?\t\t\t: " << isOdd(b) << endl;


    cout << "Bilangan "<< a <<" merupakan faktor dari bilangan "<< b <<" ?\t\t: " << isFactor(b,a) << endl;
    cout << "Bilangan "<< b <<" merupakan faktor dari bilangan "<< a <<" ?\t\t: " << isFactor(a,b) << endl;

    cout << "Bilangan yang lebih besar antara "<< a <<" dan "<< b << "\t\t: "<< maxN(a,b) <<endl;
    cout << "Bilangan yang lebih kecil antara "<< a <<" dan "<< b << "\t\t: "<< minN(a,b) <<endl;

    cout << "==========================================================" << endl;
    cout << "Program untuk menentukan maxArray, minArray, isFound, dan swapN " << endl;
    cout << "==========================================================" << endl;
    cout << "Masukkan Jumlah Element array : ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cout << "Masukkan bilangan ke-[" << i << "] : ";
        cin >> arr[i];
    }
    jumlah = sizeof(arr)/sizeof(int);
    cout << "Bilangan terbesar dalam ";Array(arr);
    cout << "\t\t: " << maxArray(arr) << endl;
    cout << "Bilangan terkecil dalam ";Array(arr);
    cout << "\t\t: " << minArray(arr) << endl;
    cout << "Bilangan " << a << " ada dalam ";Array(arr);
    cout << " ?\t\t: " << isFound(a,arr) << endl;
    cout << "Bilangan " << b << " ada dalam ";Array(arr);
    cout << " ?\t\t: " << isFound(b,arr) << endl;

    swapN(a,b);


    return 0;
}

bool isEven (int a) {
    return a % 2 == 0;
}

bool isOdd (int a){
    return a % 2 == 1;
}

bool isFactor(int a, int b){
    return a % b == 0;
}

int maxN(int a,int b){
    int m=0;
    if(a>b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int minN(int a, int b){
    int m;
    if(a<b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int maxArray(int a[]){
    int m=0;
    for (int i=0; i<jumlah ; i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}


int minArray(int a[]){
    int m=a[0];
    for (int i=0; i<jumlah ; i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}

bool isFound(int x, int a[]){
    bool m;
    for (int i=0; i<jumlah ; i++) {
        if (x == a[i]){
            m = true;
        }else{
            m = false;
            }
    }
    return m;
}

void Array(int myArray[]){
    cout <<"Array[" << jumlah << "] = {";
    for (int i=0; i < jumlah; i++){
        cout << myArray[i];
        if (i < jumlah-1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "}";
}

void swapN(int a,int b){
    cout << "Menukar bilangan jika a : "<< a <<" dan b : "<< b << " maka ";
    int temp = a;
    a = b;
    b = temp;
    cout << "a : " << a << " dan b : "<< b;
}
