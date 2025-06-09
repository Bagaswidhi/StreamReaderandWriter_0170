#include <iostream>
#include <exception>
using namespace std;

int main (){
    try {
    int umur;
    cout << "Masukkan umur anda: ";
    cin >> umur;

    if (umur < 0){
        throw out_of_range("Umur tidak mungkin negatif!");
    }
    else if (umur > 200){
        throw out_of_range("Manusia Purba");
    }
    else throw invalid_argument("Input tidak valid!");
    }
    catch (const std::exception& e){
        std::cerr << e.what() << "\n";
    }
}