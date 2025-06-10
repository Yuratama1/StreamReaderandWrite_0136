#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namafile;
    cout << "Masukkan nama file : ";
    cin >> namafile;
    //membuka file dalam mode mmebaca
    ofstream outfile;
    //menunjuk ke debuah nama file
    outfile.open(namafile + ",txt", ios::out);
    cout << ">= Menulis file \'q'\' untuk keluar" << endl;
}
