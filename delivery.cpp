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
    string keterangan, jenis, jemput;
    float berat;
};
struct pencatatan{
    pgm pengirim;
    pnm penerima;
    brn barang;
    int tarif, total_tarif;
    int tarif_jemput = 10000;
}catatan[100];

void input_data(int n);
void periksa_arsip(int n);
void menu();
void pilih_1();

int urutan(int n){
    int nomor;
    nomor = n + 0;
    return nomor;
}

int nomor = 0;

int main(){

    menu();

    return 0;
}

void input_data(int n){
    int i;
    cout << "Catatan No." << n+1 << endl;
    cout << "----------*FORMULIR DATA PENGIRIMAN*--------" << endl;
    // Input Pengirim
    cout << "Nama Pengirim   : ";
    cin.sync();
    getline(cin,catatan[n].pengirim.nama);
    cout << "Pulau Asal      : " << endl;
    cout << "   1. Sumatera.    3. Kalimantan.  5. Papua." << endl;
    cout << "   2. Jawa.        4. Sulawesi.    6. Bali" << endl;
    while(true){
        cout << "Pilih pulau asal: ";
        cin >> i;
        switch(i){
            case 1:
                catatan[n].pengirim.pulau = "Sumatera";
                break;
            case 2:
                catatan[n].pengirim.pulau = "Jawa";
                break;
            case 3:
                catatan[n].pengirim.pulau = "Kalimantan";
                break;
            case 4:
                catatan[n].pengirim.pulau = "Sulawesi";
                break;
            case 5:
                catatan[n].pengirim.pulau = "Papua";
                break;
            case 6:
                catatan[n].pengirim.pulau = "Bali";
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
    getline(cin,catatan[n].pengirim.alamat);

    // Input Penerima
    cout << "------------------------------------------" <<  endl;
    cout << "Nama Penerima   : ";
    cin.sync();
    getline(cin,catatan[n].penerima.nama);
    cout << "Pulau Tujuan    : " << endl;
    cout << "   1. Sumatera.    3. Kalimantan.  5. Papua." << endl;
    cout << "   2. Jawa.        4. Sulawesi.    6. Bali" << endl;
    while(true){
        cout << "Pilih pulau tujuan: ";
        cin >> i;
        switch(i){
            case 1:
                catatan[n].penerima.pulau = "Sumatera";
                break;
            case 2:
                catatan[n].penerima.pulau = "Jawa";
                break;
            case 3:
                catatan[n].penerima.pulau = "Kalimantan";
                break;
            case 4:
                catatan[n].penerima.pulau = "Sulawesi";
                break;
            case 5:
                catatan[n].penerima.pulau = "Papua";
                break;
            case 6:
                catatan[n].penerima.pulau = "Bali";
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
    getline(cin,catatan[n].penerima.alamat);
    // Informasi barang dan jenis pengiriman
    cout << "------------------------------------------" << endl;
    cout << "Nama/Keterangan barang : ";
    cin.sync();
    getline(cin,catatan[n].barang.keterangan);
    cout << "Berat barang(kg)       : ";
    cin >> catatan[n].barang.berat;
    cout << "------------------------------------------" << endl;
    cout << "Jenis Pengiriman (Standar / Express): ";
    cin >> catatan[n].barang.jenis;
    cout << "Jemput paket dirumah [Ya/Tidak] : ";
    cin >> catatan[n].barang.jemput;
}
void periksa_arsip(int n){
    cout << "==========================================" << endl;
    cout << "-----------------PENGIRIM-----------------" << endl;
    cout << "Nama Pengirim   : " << catatan[n].pengirim.nama << endl;
    cout << "Pulau Asal      : " << catatan[n].pengirim.pulau << endl;
    cout << "Alamat Pengirim : " << catatan[n].pengirim.alamat << endl;
    cout << "-----------------PENERIMA-----------------" << endl;
    cout << "Nama Penerima   : " << catatan[n].penerima.nama << endl;
    cout << "Pulau Tujuan    : " << catatan[n].penerima.pulau << endl;
    cout << "Alamat Penerima : " << catatan[n].penerima.alamat << endl;
    cout << "------------------BARANG------------------" << endl;
    cout << "Nama/Keterangan barang  : " << catatan[n].barang.keterangan << endl;
    cout << "Berat barang(kg)        : " << catatan[n].barang.berat << " kg" << endl;
    cout << "----------------PENGIRIMAN----------------" << endl;
    cout << "Jenis Pengiriman        : " << catatan[n].barang.jenis << endl;
    cout << "Jemput paket dirumah    : " << catatan[n].barang.jemput << endl;
    cout << "------------------------------------------" << endl;
    if (catatan[n].barang.jenis == "Standar" || catatan[n].barang.jenis == "standar"){
        if(catatan[n].pengirim.pulau == "Sumatera"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Jawa" || catatan[n].penerima.pulau == "Kalimantan"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Sulawesi" || catatan[n].penerima.pulau == "Bali"){
                catatan[n].tarif = 70000;
            }else{
                catatan[n].tarif = 100000;
            }
        }else if(catatan[n].pengirim.pulau == "Jawa"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Sumatera"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 50000;
            }else{
                catatan[n].tarif = 70000;
            }
        }else if(catatan[n].pengirim.pulau == "Kalimantan"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Sumatera" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 50000;
            }else{
                catatan[n].tarif = 70000;
            }
        }else if(catatan[n].pengirim.pulau == "Sulawesi"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Papua"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 50000;
            }else{
                catatan[n].tarif = 70000;
            }
        }else if(catatan[n].pengirim.pulau == "Bali"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 50000;
            }else{
                catatan[n].tarif = 70000;
            }
        }else{
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 15000;
            }else if(catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 40000;
            }else if(catatan[n].penerima.pulau == "Jawa" || catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Bali"){
                catatan[n].tarif = 70000;
            }else{
                catatan[n].tarif = 100000;
            }
        }
    }else {
            if(catatan[n].pengirim.pulau == "Sumatera"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Jawa" || catatan[n].penerima.pulau == "Kalimantan"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Sulawesi" || catatan[n].penerima.pulau == "Bali"){
                catatan[n].tarif = 80000;
            }else{
                catatan[n].tarif = 110000;
            }
        }else if(catatan[n].pengirim.pulau == "Jawa"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Sumatera"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 60000;
            }else{
                catatan[n].tarif = 80000;
            }
        }else if(catatan[n].pengirim.pulau == "Kalimantan"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Sumatera" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 60000;
            }else{
                catatan[n].tarif = 80000;
            }
        }else if(catatan[n].pengirim.pulau == "Sulawesi"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Papua"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Bali" || catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 60000;
            }else{
                catatan[n].tarif = 80000;
            }
        }else if(catatan[n].pengirim.pulau == "Bali"){
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Jawa"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 60000;
            }else{
                catatan[n].tarif = 80000;
            }
        }else{
            if(catatan[n].penerima.pulau == catatan[n].pengirim.pulau){
                catatan[n].tarif = 25000;
            }else if(catatan[n].penerima.pulau == "Sulawesi"){
                catatan[n].tarif = 50000;
            }else if(catatan[n].penerima.pulau == "Jawa" || catatan[n].penerima.pulau == "Kalimantan" || catatan[n].penerima.pulau == "Bali"){
                catatan[n].tarif = 80000;
            }else{
                catatan[n].tarif = 110000;
            }
        }
    }
    if (catatan[n].barang.jemput == "Ya" || catatan[n].barang.jemput == "ya"){ 
        cout << "Tarif Antar pulau            : Rp." << catatan[n].tarif << "/kg" << endl;
        cout << "Tarif Jemput barang dirumah  : Rp." << catatan[n].tarif_jemput << endl;
        catatan[n].total_tarif = catatan[n].tarif * catatan[n].barang.berat + catatan[n].tarif_jemput;
        cout << "Total harga                  : Rp." << catatan[n].tarif << " x " << catatan[n].barang.berat << " kg" << " + Rp." << catatan[n].tarif_jemput << endl;
        cout << "                             : Rp." << catatan[n].total_tarif << endl;
        cout << "==========================================" << endl;
    } else{
        cout << "Tarif Antar pulau  : Rp." << catatan[n].tarif << "/kg" << endl;
        catatan[n].total_tarif = catatan[n].tarif * catatan[n].barang.berat;
        cout << "Total harga        : Rp." << catatan[n].tarif << " x " << catatan[n].barang.berat << " kg" << endl;
        cout << "                   : Rp." << catatan[n].total_tarif << endl;
        cout << "==========================================" << endl;
        }
}
void pilih_1(){
    nomor = urutan(nomor);
    char yn;

    while (true){
        input_data(nomor);

        cout << endl;

        periksa_arsip(nomor);

        while(true){
            cout << "Apakah data sudah benar [Y/N] : ";
            cin >> yn;
            if(yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N'){
                break;
            }else{
                cout << "Sulit dipahami. Mohon Pilih dengan benar." << endl;
                continue;
            }
        }

        if(yn == 'y' || yn == 'Y'){
            cout << endl;
            break;
        }else{
            cout << endl;
            continue;
        }

    }

    nomor = nomor + 1;
}
void menu(){
    int pilih, nomor;

        cout << "------      PUNTEN DELIVERY      ------" << endl;
        cout << "------ JASA DELIVERY ANTAR PULAU ------" << endl;

        while(true){
            cout << "MENU : " << endl;
            cout << "   1. Melakukan Pengiriman." << endl;
            cout << "   2. Arsip Data Pengiriman." << endl;
            cout << "   3. TUTUP PROGRAM." << endl;
            cout << "Pilih menu : ";
            cin >> pilih;


                if (pilih == 1){
                    cout << endl;
                    pilih_1();
                }else if(pilih == 2){
                    cout << endl;
                    cout << "Catatan nomor : ";
                    cin >> nomor;
                    nomor--;
                    periksa_arsip(nomor);
                    cout << endl;
                }else if(pilih == 3){
                    break;
                }else{
                    cout << "--- SULIT DIPAHAMI. SEMOGA KAMU BISA MEMILIH DENGAN BENAR ---" << endl;
                    continue;
                }
        }
}
