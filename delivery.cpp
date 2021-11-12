#include <iostream>
using namespace std;

//PROJECT UNNES DELVERY
int main(){
	int pilihan;
	char confirm;
do
{
    cout << “PUNTEN DELIVERY” << endl;
    cout << “================” << endl;
    cout << “ Selamat datang di tampilan utama Punten Delivery” << endl;
    cout << endl;
    cout << “##  Daftar Layanan Pengiriman Punten Delivery  ##” << endl;
    cout << “=======================================” << endl;
    cout << “ 1. Pengiriman Standar ( 2 - 4 Hari )” << endl;
    cout << “ 2. Pengiriman Express ( 1 - 2 Hari)” << endl;
    cout << endl;

    cout << “Pilihan anda : “;
    Cin >> pilihan;

    switch(pilihan){
    case 1:
      cout << “Anda memilih pengiriman standar” << endl;
      break;
    case 2:
      cout  << “Anda memilih pengiriman express” << endl;
      break;
    default :
      cout << “Pilihan tidak tersedia” << endl;
    }
    cout << endl;

    cout << “Pilihan anda sudah benar (y/n)? “;
    cin >> confirm;
    cout << endl;
}
while (confirm != ‘n’);
