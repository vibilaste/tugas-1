#include <iostream>

using namespace std;

bool isGanjil(int a){
    return a%2==1;
}

void genapTerkecil(int arr[], int n){
    int min = arr[0],index;

    for(int i=0; i<n ;i++){
        if(!isGanjil(arr[i])){
            if(arr[i]<min){
                min = arr[i];
                index = i;
            }
        }
    }

    cout << "Bilangan Genap terkecil : " << min << endl;
    cout << "Index : " << index << endl;

}

int main()
{
    int Arr[5] = {10,7,12,3,6};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    genapTerkecil(Arr,n);
    return 0;
}

