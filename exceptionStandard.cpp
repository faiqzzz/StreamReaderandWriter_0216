#include <iostream>
#include <exception>
// untuk obyek exception yang akan di gunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main ()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array interger 3 elemen
        cout << data.at(4) << endl;
        // memanggil array elemen ke 5
    }
    catch(exception& e)
    {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan di eksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris program yang terakhir" << endl;
    /* Penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalaahn*/
    return 0;
}