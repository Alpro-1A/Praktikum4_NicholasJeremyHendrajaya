#include <iostream>

using namespace std;

int main()
{
    int jml, hasil, a = 0, b = 1, Term;

    cout << "PROGRAM TABEL FIBONACCI\n\n";


    // Input jumlah deret angka yang diinginkan pengguna
    cout << "Masukkan jumlah angka yang di inginkan: "; cin >> jml;
    cout << endl;

    // Output untuk menampilkan deret Fibonacci
    cout << "Berikut deret Fibonacci dari jumlah tersebut: ";

    /* Operasi pencari deret Fibonacci, darimana dapat deret? Rumus deret Fibonacci bisa ditulis sebagai Un = Un-2 + Un-1.
    Simpelnya suku 1 + suku 2 = suku 3, lalu suku 2 + suku 3 = suku 4, dan seterusnya*/
    for (int i = 1; i <= jml; ++i) {
    cout << a << " ";
    //Pada setiap iterasi, akan dicetak nilai variabel a yang diikuti dengan spasi agar rapi
    Term = a + b;
    // Menghitung nilai berikutnya dalam deret Fibonacci lalu menyimpannya dalam variabel Term
    a = b;
    // Memindahkan nilai b ke a untuk digunakan dalam iterasi berikutnya.
    b = Term;
    // Mempersiapkan variabel b untuk iterasi berikutnya.
}
    cout << endl;
    return 0;
}

// Mohon maaf untuk komentarnya yang banyak, karena materi ini lumayan susah untuk saat ini.
