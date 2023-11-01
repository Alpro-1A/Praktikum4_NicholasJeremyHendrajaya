#include <iostream>

using namespace std;

int main() {
    int tinggi;

    // Input tinggi segitiga sesuai kemauan pengguna
    cout << "Masukkan tinggi segitiga yang diinginkan: ";cin >> tinggi;

    // Proses membuat segitiga binang
    for (int i = 1; i <= tinggi; i++) {
        // Operasi membuat spasi pada sisi kiri atau awal pada setiap baris agar terbentuk segitiga
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Operasi untuk membuat bintang pada setiap garis yang telah diberi spasi tadi
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
