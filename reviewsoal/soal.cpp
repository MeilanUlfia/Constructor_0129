#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class bangunDatar;


class persegiPanjang{
    public:
        void inputData(bangunDatar &bd);
        void outputData(bangunDatar &bd);

};

class bangunDatar{
    private:
    float panjang;
    float lebar;
    float hitungLuas(){
        return panjang * lebar;
    };
    float hitungKeliling(){
        return 2 * (panjang + lebar);
    };
public:
    //untuk mengakses panjang dan luar
}