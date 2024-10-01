#include<iostream>
#include<string>
using namespace std;

int pokok(int jam)
{
    int gajipokok;
    if(jam >= 1){
        gajipokok = 7500 * jam;
    }
    else{
        gajipokok = 0;
    }
    return gajipokok;
}

int lembur(int jam)
{
    int uanglembur;
    if(jam > 8){
        uanglembur = (jam - 8) * 7500 * 1.5;
    }
        else{
            uanglembur = 0;
        }
    return uanglembur;
}

int makan(int jam)
{
    int uangmakan;
    if(jam >= 9){
        uangmakan = 10000;
    }
        else{
            uangmakan = 0;
        }
    return uangmakan;
}

int transport(int jam)
{
    int uangtransport;
    if(jam >= 10){
        uangtransport = 13000;
    }
        else{
            uangtransport = 0;
        }
    return uangtransport;
}

int main()
{
    string nama, nip;
    int jamkerja, gajipokok;
    cout << "PROGRAM MENGHITUNG GAJI KARYAWAN PT. XYZ \n \n";
    cout << "INPUT DATA \n";
    cout << "-----------\n";

    cout << "Masukan NIP  : "; getline(cin, nip);
    cout << "Masukan nama : "; getline(cin, nama);
    cout << "Masukan jumlah jam kerja : "; cin >> jamkerja;

    cout << "------------------------------------------\n \n";
    cout << "IDENTITAS KARYAWAN \n";
    cout << "------------------- \n";
    cout << "NIP : " << nip << " |  Nama : " << nama << " |  Jam kerja : " << jamkerja << " Jam" << endl;
    cout << "\n============ JUMLAH GAJI KARYAWAN ==============\n";
    cout << "Gaji pokok     : " << "Rp." << pokok(jamkerja) << endl;
    cout << "Uang lembur    : " << "Rp." << lembur(jamkerja) << endl;
    cout << "Uang makan     : " << "Rp." << makan(jamkerja) << endl;
    cout << "Uang transport : " << "Rp." << transport(jamkerja) << endl;

    cout << "Total Keseluruhan gaji : Rp." << transport(jamkerja) + pokok(jamkerja) + lembur(jamkerja) + makan(jamkerja);

cout<<"\n\n\n";
return 0;
}
