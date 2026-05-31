#include <iostream>
using namespace std;

int main(){
    double harga = 1000000;
    double discount, sewa, bayar;
    int tahun;

    //perhitungan
    sewa = tahun * harga;
    bayar = sewa - discount;

    //input
    cout << "---PEMBAYARAN KONTRAKAN PAK AMIR---"<< endl;
    cout << "Berapa tahun anda ingin menyewa : ";
    cin >> tahun;

    //sistem
    if (tahun >= 3){
        discount = sewa * 0.20;
    } else if (tahun == 2){
        discount = sewa * 0.10;
    } else {
        discount = 0;
    }

    //output
    cout << "\n=====BIAYA KONTRAK=====" << endl;
    cout << "Lama Sewa : " << tahun << " Tahun" << endl;
    cout << "Harga Sewa : Rp " << sewa << endl;
    cout << "Discount : Rp " << discount << endl;
    cout << "-------------------------" << endl;
    cout << "Total Biaya : Rp " << bayar << endl;
    cout << "=========================" << endl;

    return 0;

}