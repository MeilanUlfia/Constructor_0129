// Buatlah program c++ dengan class barang yang memiliki atribut: namaBarang,
// Kodebarang
// Program memiliki constructor berparameter untuk mengisi
// nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class barang
{
private:
    string namaBarang;
    int kodeBarang;

public:
    barang(int kode, string nama)
    {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void input()
    {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang  : " << kodeBarang << endl;
    }
};

int main()
{

    barang brg(102, "Ipad");

    brg.input();
    return 0;
}
