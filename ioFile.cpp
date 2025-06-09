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

}