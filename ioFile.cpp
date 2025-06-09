#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main (){
    string baris;

    //Membuat objek output file stream
    ofstream outfile;
    //Membuka file untuk ditulisi
    outfile.open("contohfile.txt");

    //Unlimited loop untuk menulis ke file
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    while(true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter 'q'
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    
    // membuat objek input file stream
    ifstream infile;
    // membuka file yang sudah ditulis
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;
    // jika file ada maka
    if (infile.is_open()){
        // melakukan perulangan setiap baris
        while (getline(infile, baris)) {
            // menampilkan setiap baris
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
}