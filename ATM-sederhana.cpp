#include <iostream>
using namespace std;

int main(){
    int pilihan,saldo, tarik;
    saldo = 1000000;
    cout << "SELAMAT DATANG DI MESIN ATM" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Keluar"<< endl;
    cout << "masukkan nomor : ";
    cin >> pilihan;
    while (pilihan > 3){
        cout << "yang di ketik tidak valid, ketik ulang!" << endl;
        cout << "masukkan nomor : ";
        cin >> pilihan;
    }
    switch (pilihan){
        case 1:
            cout << "Saldo Anda Rp. " << saldo << endl;
            break;
        case 2:
            cout << "Masukkan saldo yang ingin ditarik : ";
            cin >> tarik;
            if (tarik > saldo){
                cout << "Saldo Anda tidak cukup" << endl;
            } else {
                cout << "Transaksi berhasil" << endl;
                saldo = saldo - tarik;
                cout << "Sisa saldo Anda Rp. " << saldo << endl;
            }
            break;
            case 3:
            cout << "Terima kasih telah menggunakan ATM sederhana" << endl;
            break;
        default:
            cout << "Input yang di ketik tidak valid, mohon ketik ulang" << endl  ;
    }
}