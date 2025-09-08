#include <iostream>
#include <string>

using namespace std;

class Coba{
    private :
    string nama;
    int umur;

    public :
        Coba(string nama, int umur){
            this->nama = nama;
            this->umur = umur;
        }

        string GetNama(){
            return nama;
        }

        void SetNama(string nama){
            this->nama = nama;
        }
        
};