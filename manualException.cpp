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
    catch (...)
    {
         /*jika selain interger maka block ini akan di eksekusi*/
         cout << "default Pengecualian diexekusi" << endl;
    }
    
    return 0;

}