#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namaFile;

    cout << "Enter Filename :";
    cin >> namaFile;

    // membuat obyek output file stream dalam mode menulis.
    ofstream outfile;
    // membuka file
    outfile.open(namaFile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // Loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }
// selesai dalam menulis sekarang tutup file nya
outfile.close();

// membuat obyek input file stream dalam mode membaca
ifstream infile;
// membuka file
infile.open(namaFile + ".txt");

cout << endl;
cout << ">= Membuka dan membaca file" << endl;
// jika file ada maka
if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();

    }
    // jika tidak di temukan file, maka akan menampilkan ini
    else
        cout << "Unable to open file";
}