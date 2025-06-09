#include <iostream>
#include <exception> // untuk obyek exception yang akan digunakan
#include <array> // untuk obyek array yang akan digunakan
using namespace std;

int main (){
    cout << "Awal Program" << endl; // Penanda 1...
    try {
        array<int, 3> data = {10, 20, 30}; // Membuat array dengan 3 elemen
        cout << data.at(5) << endl; // Mengakses array elemen ke 5 (indeks 5)
    }
    catch (exception& e){
        //Penangkap menggunakan obyek exception
        cout << e.what() << endl; // Menampilkan pesan kesalahan. Akan dieksekusi karena array data hanya memiliki 3 elemen (indeks 0-2)
    }
    cout << "Baris Program Yang Terakhir" << endl; // Penanda 2 : bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan
    return 0;
}
