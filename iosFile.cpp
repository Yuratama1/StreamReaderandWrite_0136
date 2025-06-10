#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string baris;
    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.Text");
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while(true){
        cout << "-";
    }
}