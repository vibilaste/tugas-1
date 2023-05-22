#include <iostream>

using namespace std;

int penjumlahan(int a){
    if(a==1){
        return 1;
    }
    else{
        return a+penjumlahan(a-1);
    }
}

int pengurangan(int a){
    if(a==1){
        return 1;
    }
    else{
        return a-pengurangan(a-1);
    }
}

int perkalian(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*perkalian(a-1);
    }
}

int pembagian(int a){
    if(a==0){
        return 1;
    }
    else{
        return a/pembagian(a-1);
    }
}

int pangkat(int a, int b)
{
   if(b == 0)
      return 1;
   else
      return a*pangkat(a,b-1);
}


int fibonaci(int a){
    if(a==1){
        return 1;
    }
    else if (a==0){
        return 0;
    }
    else{
        return fibonaci(a-1)+fibonaci(a-2);
    }
}

int faktorial(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*faktorial(a-1);
    }
}

int main()
{
    cout << "=== Program Rekursif Penjumlahan, Pengurangan, Perkalian, Pembagian, Fibonaci, Faktorial ===" << endl;
    int n, x, y;
    cout << "Masukkan Bilangan : ";
    cin >> n;
    cout << "Penjumlahan : " << penjumlahan(n) << endl;
    cout << "Pengurangan : " << pengurangan(n) << endl;
    cout << "Perkalian : " << perkalian(n) << endl;
    cout << "Pembagian : " << pembagian(n) << endl;
    cout << "Fibonaci : " << fibonaci(n) << endl;
    for(int i=0; i<=n ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial : " << faktorial(n) << endl;
    cout << "=== Program Rekursif Pangkat ===" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> x;
    cout << "Masukkan Pangkat : ";
    cin >> y;
    cout << "Pangkat : " << pangkat(x, y) << endl;
    return 0;
}
