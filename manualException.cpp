#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; // Melemparkan sebuah integer maka
        cout << "Pernyataan ini tidak akan diesksekusi karena exception telah dilempar." << endl;
    }
    catch (int a) {
        // blok ini akan di ekseskusi jika exception yang dilempar adalah integer
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...){
        // Jika selain integer yang dilempar maka blok ini akan dieksekusi
        cout << "default Pengecualian dieksekusi" << endl;
    }
    return 0;
}