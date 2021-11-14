#include <iostream>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

struct pgm{
    string nama, pulau, alamat;
};
struct pnm{
    string nama, pulau, alamat;
};
struct brn{
    string keterangan;
    float berat;
};
struct pencatatan{
    pgm pengirim;
    pnm penerima;
    brn barang;
    int tarif;
}catatan[100];

int main(){

    int i;
    cout << "----------*FORMULIR DATA PENGIRIMAN*--------" << endl;
    cout << "Nama Pengirim   : ";
    cin.sync();
    getline(cin,catatan[0].pengirim.nama);
    cout << "Pulau Asal      : " << endl;
    cout << "   1. Sumatera.    3. Kalimantan.  5. Papua." << endl;
    cout << "   2. Jawa.        4. Sulawesi.    6. Bali" << endl;
    while(true){
        cout << "Pilih pulau asal:";
        cin >> i;
        switch(i){
            case 1:
                catatan[0].pengirim.pulau = "Sumatera";
                break;
            case 2:
                catatan[0].pengirim.pulau = "Jawa";
                break;
            case 3:
                catatan[0].pengirim.pulau = "Kalimantan";
                break;
            case 4:
                catatan[0].pengirim.pulau = "Sulawesi";
                break;
            case 5:
                catatan[0].pengirim.pulau = "Papua";
                break;
            case 6:
                catatan[0].pengirim.pulau = "Bali";
                break;
            default:
                cout << "Sulit dipahami. Semoga kamu bisa memilih dengan benar." << endl;
                break;
        }
        if(i < 7){
            break;
        }
    }
    cout << "Alamat Pengirim : ";
    cin.sync();
    getline(cin,catatan[0].pengirim.alamat);
    cout << endl;
    cout << "Nama Penerima   : ";
    cin.sync();
    getline(cin,catatan[0].penerima.nama);
    cout << "Pulau Tujuan    : ";
    cout << "   1. Sumatera.    3. Kalimantan.  5. Papua." << endl;
    cout << "   2. Jawa.        4. Sulawesi.    6. Bali" << endl;
    while(true){
        cout << "Pilih pulau tujuan:";
        cin >> i;
        switch(i){
            case 1:
                catatan[0].pengirim.pulau = "Sumatera";
                break;
            case 2:
                catatan[0].pengirim.pulau = "Jawa";
                break;
            case 3:
                catatan[0].pengirim.pulau = "Kalimantan";
                break;
            case 4:
                catatan[0].pengirim.pulau = "Sulawesi";
                break;
            case 5:
                catatan[0].pengirim.pulau = "Papua";
                break;
            case 6:
                catatan[0].pengirim.pulau = "Bali";
                break;
            default:
                cout << "Sulit dipahami. Semoga kamu bisa memilih dengan benar." << endl;
                break;
        }
        if(i < 7){
            break;
        }
    }
    cout << "Alamat Penerima : ";
    cin.sync();
    getline(cin,catatan[0].penerima.alamat);
    cout << "------------------------------------------" << endl;
    cout << "Nama/Keterangan barang : ";
    cin.sync();
    getline(cin,catatan[0].barang.keterangan);
    cout << "Berat barang(kg)       : ";
    cin >> catatan[0].barang.berat;
    cout << "------------------------------------------" << endl << endl;

    cout << "==========================================" << endl;
    cout << "-----------------PENGIRIM-----------------" << endl;
    cout << "Nama Pengirim   : " << catatan[0].pengirim.nama << endl;
    cout << "Pulau Asal      : " << catatan[0].pengirim.pulau << endl;
    cout << "Alamat Pengirim : " << catatan[0].pengirim.alamat << endl;
    cout << "-----------------PENERIMA-----------------" << endl;
    cout << "Nama Penerima   : " << catatan[0].penerima.nama << endl;
    cout << "Pulau Tujuan    : " << catatan[0].penerima.pulau << endl;
    cout << "Alamat Penerima : " << catatan[0].penerima.alamat << endl;
    cout << "------------------BARANG------------------" << endl;
    cout << "Nama/Keterangan barang : " << catatan[0].barang.keterangan << endl;
    cout << "Berat barang(kg)       : " << catatan[0].barang.berat << endl;
    cout << "------------------------------------------" << endl;
    if(catatan[0].pengirim.pulau == "Sumatera" || catatan[0].pengirim.pulau == "sumatera"){
        if(catatan[0].pengirim.pulau == catatan[0].pengirim.pulau){
                catatan[0].tarif = 15000;
        }else if(catatan[0].pengirim.pulau == "Jawa" || catatan[0].pengirim.pulau == "jawa" || catatan[0].pengirim.pulau == "Kalimantan" || catatan[0].pengirim.pulau == "kalimantan"){
            catatan[0].tarif = 40000;
        }else if(catatan[0].pengirim.pulau == "Sulawesi" || catatan[0].pengirim.pulau == "sulawesi" || catatan[0].pengirim.pulau == "Bali" || catatan[0].pengirim.pulau == "bali"){
            catatan[0].tarif = 70000;
        }else{
            catatan[0].tarif = 10000;
        }
    }
    cout << "Total harga barang ";


    return 0;
}
