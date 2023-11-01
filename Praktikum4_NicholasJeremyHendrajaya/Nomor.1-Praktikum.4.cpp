#include <iostream>

using namespace std;

int main()
{
    int batas;
    int jmlGanjil = 0;
    int jmlGenap = 0;
    int jmlPrima = 0;
    int faktorGanjil = 0;
    int faktorGenap = 0;
    int faktorPrima = 0;

    // Variabel untuk menyimpan batas, jumlah bilangan ganjil, genap, dan prima

    cout << "[ Program Bilangan Ganjil, Genap, dan Prima ]" << endl;

    cout << "Masukkan batas akhir: ";
    cin >> batas;
    // Input batasan akhir sesuai keinginan pengguna

    cout << "Bilangan Ganjil: ";
    // Output untuk bilangan ganjil, cout ini di atas karena jika diletakkan di bawah akan mencetak banyak baris

    // Proses mencari bilangan ganjil
    for (int i = 0; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; // Menampilkan bilangan ganjil
            jmlGanjil += i;   // Operasi penjumlahan bilangan ganjil


        }
    }


    cout << endl;

    // Hal yang sama untuk bilangan genap
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        jmlGenap += i;
    }
    cout << endl;

    // Hal yang sama untuk bilangan prima
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }

        if (j * j > i)
        {
            cout << i << " ";
            jmlPrima += i;
        }
    }
    cout << endl;

    // Output jumlah dari masing-masing bilangan
    cout << "Jumlah bilangan ganjil: " << jmlGanjil << endl;
    cout << "Jumlah bilangan genap: " << jmlGenap << endl;
    cout << "Jumlah bilangan Prima: " << jmlPrima << endl;



    // Langkah terakhir yaitu menentukan faktor-faktor dari jumlah masing-masing bilangan

    // Untuk bilangan ganjil
    cout << "Faktor-faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= jmlGanjil; i++) {
    if (jmlGanjil % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

// Untuk bilangan genap
    cout << "Faktor-faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= jmlGenap; i++) {
    if (jmlGenap % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

// Untuk bilangan prima
    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= jmlPrima; i++) {
    if (jmlPrima % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;


    return 0;
}
