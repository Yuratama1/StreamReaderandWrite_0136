#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 0.5; // melempar sebuah integr maka
        cout << "Pernyataan tdk akan diekseskusi" << endl;
    }
    catch(int a){
        //blok akan di eksekusi
        cout << "Pengecualian akan dikesekusi" << endl;
    }
    catch(...){
        /*jika selain integer maka blok akan di eksekusi*/
        cout << "Default pengecualian dieksekusi" << endl;
    }
}