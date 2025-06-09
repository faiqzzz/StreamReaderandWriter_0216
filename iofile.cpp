#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // membuat obyek output file stream dalam mode menulis.
    ofstream outfile;
    // membuka file
    outfile.open("contohfile.txt");

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
        
}