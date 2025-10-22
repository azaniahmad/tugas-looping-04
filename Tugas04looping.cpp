#include <iostream>
using namespace std;

int main() {
    int jumGenap = 0;
    int jumGanjil = 0;
    int data;
    int ke = 1;

    cout << "=== Program Hitung Jumlah Data Genap dan Ganjil ===" << endl;
    cout << "Masukkan bilangan dari 0 sampai 10" << endl << endl;

    while (ke <= 10) {
        cout << "Masukkan data ke-" << ke << " : ";
        cin >> data;

        // Validasi input (harus 0-10)
        if (data < 0 || data > 10) {
            cout << "Input tidak valid! Silakan masukkan bilangan 0-10" << endl;
            continue;
        }

        // Cek apakah data genap atau ganjil
        if (data % 2 == 0) {
            jumGenap += data;
        }
        else {
            jumGanjil += data;
        }

        ke++;
    }

    cout << endl;
    cout << "=== HASIL AKHIR ===" << endl;
    cout << "Jumlah total bilangan genap : " << jumGenap << endl;
    cout << "Jumlah total bilangan ganjil: " << jumGanjil << endl;

    return 0;
}