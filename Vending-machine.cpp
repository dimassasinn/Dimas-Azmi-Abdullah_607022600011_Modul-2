#include <iostream>
using namespace std;

int main(){
    float uang, harga;
    char pilihan;
    cout << "masukkan uang : ";
    cin >> uang;
    cout << endl << "Pilih Minuman" << endl;
    cout << "A. Harga 5000" << endl;
    cout << "B. Harga 7000" << endl;
    cout << "C. Harga 10000" << endl;
    cout << "Masukkan A, B atau C (Menggunakan huruf kapital) : "; 
    cin >> pilihan;

    switch (pilihan){
        case 'A':
        harga = 5000;
        cout << "harga minuman yang dipilih Rp." << harga << endl;
        if (uang < harga){
            cout << "uang anda tidak cukup";
        } else {
            cout << "uang yang tersisa sebesar Rp." << uang - harga;
        }
        break;
        case 'B':
        harga = 7000;
        cout << "harga minuman yang dipilih Rp." << harga << endl;
        if (uang < harga){
            cout << "uang anda tidak cukup";
        } else {
            cout << "uang yang tersisa sebesar Rp." << uang - harga;
        }
        break;
        case 'C': 
        harga = 10000;
        cout << "harga minuman yang dipilih Rp." << harga << endl;
        if (uang < harga){
            cout << "uang anda tidak cukup";
        } else {
            cout << "uang yang tersisa sebesar Rp." << uang - harga;
        }
        break;
        default:
        cout << "terima kasih telah menggunakan vending machine" << endl;
    }
    return 0;
}