  // NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL 
  // NPM  : 2410631170069

#include <iostream>
using namespace std;

int main() 
{
    int n;

    //  meminta untuk memasukan jumalah array
    cout << "\n\nMasukkan jumlah elemen array: ";
    cin >> n;

    int nilai[n];

    //input jumlah array
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> nilai[i];
    }

    // Mencari nilai tertinggi di array
    int maksimum = nilai[0];
    for (int i = 1; i < n; i++) 
    {
        if (nilai[i] > maksimum) 
        {
            maksimum = nilai[i];
        }
    }
    
    cout << "\nNilai tertinggi dalam array: " << maksimum << endl;

    //input memasukkan angka untuk dicari
    int angka;
    cout << "\nMasukkan angka yang ingin diperiksa: ";
    cin >> angka;

    // Memeriksa apakah angka ada di array, jika ada tampilkan indeksnya
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        if (nilai[i] == angka) 
        {
            cout << "Angka " << angka << " ditemukan di indeks = ke-" << i << endl;
            found = true;
        }
    }

    return 0;
}
    