#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch(int a)
    {
        // blok ini akan di ekseskusi
        cout << "default Pengecualian diexsekusi" << endl;
    }
    
    
    return 0;

}