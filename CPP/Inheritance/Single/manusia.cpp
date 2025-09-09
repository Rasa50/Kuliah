#include <iostream>
#include <string>

using namespace std;

class Manusia{

    private :
        string nama;
        string alamat;
        string no_ktp;
        string no_telepon;

    public :

        Manusia(){
        }

        void setNama (string nama){
            this->nama = nama;
        }

        string getNama() {
            return this->nama;
        }

        void setAlamat (string alamat){
            this->alamat = alamat;
        }

        string getAlamat() {
            return this->alamat;
        }

        void setNoKtp (string no_ktp){
            this->no_ktp = no_ktp;
        }

        string getNoKtp() {
            return this->no_ktp;
        }

        void setNoTelepon (string no_telepon){
            this->no_telepon = no_telepon;
        }

        string getNoTelepon() {
            return this->no_telepon;
        }

        ~Manusia(){
        }

};