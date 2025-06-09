#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void readandwritefile(string format){
string baris;
    string namefile;

    cout << "Masukkan nama file : ";
    cin >> namefile;
    cin.ignore(); // Mengabaikan newline karakter setelah input nama file

    // Membuat objek output file stream
    ofstream outfile;
    // Membuka file untuk ditulisi
    outfile.open(namefile + "." + format);
    // Unlimited loop untuk menulis ke file
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter 'q'
        if (baris == "q")
            break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // membuat objek input file stream
    ifstream infile;
    // membuka file yang sudah ditulis
    infile.open(namefile + "." + format);
    
    cout << endl
         << ">= Membuka dan membaca file" << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // menampilkan setiap baris
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan pesan ini
    else
        cout << "File tidak ditemukan!" << endl;
}

int main()
{
    int choice;
    cout << "1. File berfomat csv" << endl;
    cout << "2. File berformat txt" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih format file (1/2/3): ";
    cin >> choice;
    cin.ignore(); // Mengabaikan newline karakter setelah input pilihan
    switch (choice) {
        case 1:
            readandwritefile("csv");
            break;
        case 2:
            readandwritefile("txt");
            break;
        case 3:
            cout << "Keluar dari program." << endl;
            return 0;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
}