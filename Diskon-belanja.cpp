#include <iostream>
using namespace std;

int main() {
    float harga, diskon;
    
    cout << "masukkan harga belanja : ";
    cin >> harga;
    if (harga > 500000) {
        diskon = harga * 0.2; 
        cout << "diskon yang anda dapatkan sebesar 20%" << endl;
    } else if (harga > 100000) {
        diskon = harga * 0.1; 
        cout << "diskon yang anda dapatkan sebesar 10%" << endl;
    } else {
        cout << "anda tidak mendapatkan diskon" << endl;
    }
    cout << "mendapatkan diskon sebesar : " << diskon << endl;
    cout << "harga setelah diskon : " << harga - diskon << endl;

    return 0;
}