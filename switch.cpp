#include <iostream>
using namespace std;

int pilihan;
string text;

int main(){
cout << “================================\n”;
cout << ” NUR RAHMAN TRI NANDA \n”;
cout << ” 171011401798 \n”;
cout << “================================\n”;
cout << “Daftar bahasa pemrograman:\n”;
cout << “1. c++ \n2. java \n3. PHP\n”;

ulangi:

cout << “Silahkan Masukan Pilihan: “;

cin >> pilihan;

switch(pilihan){
case 1:
text=”Kamu memilih Pemrograman c++”;
break;
case 2:
text=”Kamu memilih Pemrograman java”;
break;
case 3:
text=”Kamu memilih Pemrograman PHP”;
break;
default:
goto ulangi;
}

cout << text;
}
