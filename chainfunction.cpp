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