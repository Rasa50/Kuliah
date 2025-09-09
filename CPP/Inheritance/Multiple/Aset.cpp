#include <iostream>
#include <string>
using namespace std;

// Superclass IndustriKuliner
class IndustriKuliner {
private:
    string no_ijin;
    string nama_pemilik;
    string kota;
    string deskripsi;

public:
    IndustriKuliner() {}

    void setNoIjin(string no_ijin) { this->no_ijin = no_ijin; }
    string getNoIjin() { return this->no_ijin; }

    void setNamaPemilik(string nama_pemilik) { this->nama_pemilik = nama_pemilik; }
    string getNamaPemilik() { return this->nama_pemilik; }

    void setKota(string kota) { this->kota = kota; }
    string getKota() { return this->kota; }

    void setDeskripsi(string deskripsi) { this->deskripsi = deskripsi; }
    string getDeskripsi() { return this->deskripsi; }

    ~IndustriKuliner() {}
};

// Subclass Restoran
class Restoran : public IndustriKuliner {
private:
    string kode;
    string jenis;
    string pangsa_pasar;

public:
    Restoran() {}

    void setKode(string kode) { this->kode = kode; }
    string getKode() { return this->kode; }

    void setJenis(string jenis) { this->jenis = jenis; }
    string getJenis() { return this->jenis; }

    void setPangsaPasar(string pangsa_pasar) { this->pangsa_pasar = pangsa_pasar; }
    string getPangsaPasar() { return this->pangsa_pasar; }

    ~Restoran() {}
};

int main() {
    IndustriKuliner industri;
    Restoran resto;

    // Data Industri Kuliner
    industri.setNoIjin("IJN123");
    industri.setNamaPemilik("Budi");
    industri.setKota("Bandung");
    industri.setDeskripsi("Restoran premium di pusat kota");

    cout << "=== Data Industri Kuliner ===" << endl;
    cout << "No Ijin: " << industri.getNoIjin() << endl;
    cout << "Pemilik: " << industri.getNamaPemilik() << endl;
    cout << "Kota: " << industri.getKota() << endl;
    cout << "Deskripsi: " << industri.getDeskripsi() << endl;

    // Data Restoran
    resto.setNoIjin("IJN456");
    resto.setNamaPemilik("Siti");
    resto.setKota("Jakarta");
    resto.setDeskripsi("Restoran kasual dengan menu Indonesia");
    resto.setKode("R001");
    resto.setJenis("Casual Dining");
    resto.setPangsaPasar("Menengah");

    cout << "\n=== Data Restoran ===" << endl;
    cout << "No Ijin: " << resto.getNoIjin() << endl;
    cout << "Pemilik: " << resto.getNamaPemilik() << endl;
    cout << "Kota: " << resto.getKota() << endl;
    cout << "Deskripsi: " << resto.getDeskripsi() << endl;
    cout << "Kode: " << resto.getKode() << endl;
    cout << "Jenis: " << resto.getJenis() << endl;
    cout << "Pangsa Pasar: " << resto.getPangsaPasar() << endl;

    return 0;
}
