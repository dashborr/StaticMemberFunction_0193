#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    // Mengembalikan referensi ke objek itu sendiri (buku&)
    buku &setJudul(string judul) {
        this->judul = judul;
        return *this; // chain function
    }

    string getJudul() {
        return this->judul;
    }
};

int main() 
{
    buku bukunya;

    // Contoh pemanggilan biasa yang dikomentari:
    // bukunya.setJudul("IPA");
    // cout << bukunya.getJudul();

    // Contoh Chain Function Calls:
    cout << bukunya.setJudul("Matematika").getJudul(); 

    return 0;
}