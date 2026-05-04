#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa (int inim, string pnama);
    void cetak();
};

mahasiswa::mahasiswa(){}

    mahasiswa::mahasiswa(int inim){
    nim = inim;
 }

 mahasiswa::mahasiswa(string pnama){
    nama = pnama;
 }

 mahasiswa::mahasiswa(int inim,string pnama){
    nim = inim;
    nama = pnama;
 }

 void mahasiswa::cetak(){

    cout << "nim" << nim << endl;
    cout << "nama" << nama << endl;
 }

 int main(){
    mahasiswa mhs1 (1002030);
    mahasiswa mhs2 ("Andi");
    mahasiswa mhs3 (202504,"Santi");

    cout << "mahasiswa 1" ; mhs1.cetak();
    cout << "mahasiswa 2" ; mhs2.cetak();
    cout << "Mahasiswa 3" ; mhs3.cetak();
    return 0;
 }