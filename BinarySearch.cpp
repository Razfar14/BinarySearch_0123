#include <iostream>
using namespace std;

int element(10);
int nPanjang;
int x;

void input (){
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maks 10) : ";
        cin >> nPanjang;
        if (nPanjang <= 10){
            break;
        }
        else{
            cout << "\n[!] Jumlah elemen tidak lebih dari 10. Silakan coba lagi.\n";
        }
    }
    
    
}