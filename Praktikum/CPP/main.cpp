#include "coba.cpp"

using namespace std;
int main(){
    Coba s1 = Coba("aji", 10);
    Coba s2 = Coba("paaji", 10);

    cout << "Nama s1: " << s1.GetNama() << endl;
    cout << "Nama s2: " << s2.GetNama() << endl;
    
    s1.SetNama("bagus");
    cout << "Nama s1: " << s1.GetNama() << endl;

}