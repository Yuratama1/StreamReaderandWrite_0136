#include <iostream>
#include <exception>
//utk objek exception yg digunakan
#include <array>
//utk objek array yg akan digunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; // penanda 1:...
    try{
        array<int, 3> data = { 10, 20, 30};
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
        //memangil array elemen 5
    }
}