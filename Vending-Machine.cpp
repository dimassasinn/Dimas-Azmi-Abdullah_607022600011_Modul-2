#include <iostream>
using namespace std;
int main(){
    char pilihan,opsi;
    int uang;
    cout << "selamat datang di vending machine" << endl;
    cout << "pilih minuman yang anda inginkan : " << endl;
    cout << "A. Air Mineral - Rp.5000" << endl;
    cout << "B. Teh - Rp.7000" << endl;
    cout << "C. Kopi - Rp.10000" << endl;
    cout << "masukkan pilihan anda : "; cin >> pilihan;
    while (pilihan != 'A' && pilihan != 'B' && pilihan != 'C'){
        cout << "pilihan yang anda masukkan salah, silahkan masukkan kembali : "; cin >> pilihan;
    }
    cout << "masukkan uang : "; cin >> uang;
    switch (pilihan){
        case 'A':
        if (uang < 5000){
            cout << "maaf uang anda tidak cukup" << endl;
        } else {
        	cout << "minuman yang anda pilih adalah Air Mineral" << endl;
		}
		break;
		case 'B':
			if (uang < 7000){
				cout << "maaf uang anda tidak cukup"<< endl;
			}else{
				cout << "minuman yang anda pilih adalah Teh" << endl;
			}
			break;
			case 'C':
				if (uang < 10000){
					cout << "uang yang anda masukkan tidak cukup" << endl;
				} else {
					cout << "minuman yang anda pilih adalah Kopi" << endl;
				}
				break;
		cout << "terima kasih telah menggunakan vending machine" << endl;
    }
}
