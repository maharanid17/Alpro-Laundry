#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

float totalBiaya (float a, float b){
    float biaya=a*b;
    return biaya;
}
float kembali (float x, float y ){
    float kembalian=x-y;
    return kembalian;
}

void paket(){


    cout<<"-----------------PILIH PAKET------------------"<<endl;
    cout<<"       KODE          |         PAKET        "<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"          A          |   Paket Express 8 jam  "<<endl;
    cout<<"          B          | Paket Standart 1-3 hari"<<endl;
    cout<<"----------------------------------------------"<<endl<<endl;
}
int main (){
    paket();
    int kdlayanan;
    char nama_pelanggan[100], alamat[100], noTlp[50], kdpaket;
    float btcucian, bayar, biaya, kembalian;

    cout<<"Pilih Paket (A/B) : ";
    cin>>kdpaket;

    if (kdpaket=='A'||kdpaket=='a'){
        cout<<"-------------------PAKET A--------------------"<<endl;
        cout<<"| KODE  |      LAYANAN       |     TARIF     |"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"|   1   |   Cuci + Setrika   |     40000     |"<<endl;
        cout<<"|   2   |    Setrika Saja    |     30000     |"<<endl;
        cout<<"|   3   |     Cuci Saja      |     20000     |"<<endl;
        cout<<"----------------------------------------------"<<endl<<endl;

        cout<<"Pilih Kode Layanan : ";
        cin>>kdlayanan;


        switch (kdlayanan) {
        case 1 :
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 40000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 40000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 40000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        case 2 :

            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 30000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 30000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 30000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        case 3 :

            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 20000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 20000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 20000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        }

    }
    else if (kdpaket=='B'||kdpaket=='b'){
        cout<<"-------------------PAKET B--------------------"<<endl;
        cout<<"| KODE  |      LAYANAN       |     TARIF     |"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"|   1   |   Cuci + Setrika   |     30000     |"<<endl;
        cout<<"|   2   |    Setrika Saja    |     20000     |"<<endl;
        cout<<"|   3   |     Cuci Saja      |     15000     |"<<endl;
        cout<<"----------------------------------------------"<<endl<<endl;

        cout<<"Berat Cucian (kg) : ";
        cin>>btcucian;
        cout<<"Pilih Kode Layanan : ";
        cin>>kdlayanan;


        switch (kdlayanan) {
        case 1 :

            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 30000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 30000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 30000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        case 2 :

            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 20000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 20000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 20000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        case 3 :

            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";gets(nama_pelanggan);
            cout<<"Alamat           : ";gets(alamat);
            cout<<"No. Tlp          : ";gets(noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            cout<<"Sub Total        : "<<totalBiaya(btcucian, 15000)<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;
            biaya=totalBiaya(btcucian, 15000);
            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            cout<<endl<<endl;
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<nama_pelanggan<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<totalBiaya(btcucian, 15000)<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            break;
        }

    }
return 0;

}

