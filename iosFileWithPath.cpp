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
    //unlimited loop untuk menulis
    while(true){
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin,baris);
        //loop akan berhenti jika anda memasukkan q
        if(baris == "q") break;
        //menulis dan memasukkan nilai dari baris ke dalam file
        outfile << baris << endl;
    }
    //selesai dalama menulis sekarang tutup filenya
    outfile.close();
    //mmembuka file dalam mode membaca
    ifstream infile;
    //menujuk ke sebuah file
    infile.open(namafile, ios::in);
    cout << endl << ">= Membuka dan Membaca File " << endl;
    //jika file ada maka
    if (infile.is_open()){
        //melakukan prulangan setiap baris
        while(getline(infile, baris)){
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file tsb setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "unable to open file";
    return 0;
}
