#include <string>
#include <iostream>
using namespace std;
#include "karyawan.cpp"

int main() {

    Manusia kmanusia;
    Karyawan kkaryawan;

    kmanusia.setNama("Gina");
    kmanusia.setAlamat("Bandung");
    kmanusia.setNoKtp("320.120.777");
    kmanusia.setNoTelepon("08123193831");

    cout << kmanusia.getNama() << endl;
    cout << kmanusia.getAlamat() << endl;
    cout << kmanusia.getNoKtp() << endl;
    cout << kmanusia.getNoTelepon() << endl;
    
    
    kkaryawan.setNama("Gina");
    kkaryawan.setAlamat("Bandung");
    kkaryawan.setNoKtp("320.120.777");
    kkaryawan.setNoTelepon("08123193831");
    kkaryawan.setNomorPegawai("092328");
    kkaryawan.setJabatan("-");
    kkaryawan.setDepartemen("-");

    cout << kkaryawan.getNama() << endl;
    cout << kkaryawan.getAlamat() << endl;
    cout << kkaryawan.getNoKtp() << endl;
    cout << kkaryawan.getNoTelepon() << endl;
    cout << kkaryawan.getNomorPegawai() << endl;
    cout << kkaryawan.getJabatan() << endl;
    cout << kkaryawan.getDepartemen() << endl;


    return 0;
}