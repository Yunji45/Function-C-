#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int hitung(const char *);
main()

{
 char string[80];
 
 cout<<"=============PROGRAM FUNGSI DENGAN POINTER==============="<<endl;
 cout<<"\nMenghitung banyaknya karakter yang di input menggunakan fungsi dan pointer"<<endl;
 cout<<"\nKetikkan Kata / Kalimat : ";
 cin.getline(string,80);
 cout<<"\nJumlah Karakter : "<<hitung(string)<<" Karakter";
 return 0;
}

int hitung(const char *s)
{
 int x=0;
 for(;*s!='\0'; s++)
 ++x;
 return x;
}
