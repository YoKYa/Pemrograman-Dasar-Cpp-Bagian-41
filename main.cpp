#include <iostream>

using namespace std;

int main(){
    system("cls");
    // Comma Operator adakag sebuah Operator yang menggunakan Koma sebagai pengganti
    int A;
    int B;
    int hasil;

    hasil = (A = 5, B = 20, (B/A)); // Operator Comma , Bisa digunakan lebih dari satu opeasi

    cout << "Hasil : " << hasil;
    cin.get();
    return 0;
}