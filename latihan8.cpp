#include<conio.h>
#include <iostream>

struct data{
int data[10];
int a,b,c,d;

void inputdata()
{

cout<<“Masukan Data\t: “;cin>>batas[a].data;

a++;}clrscr();}

void lihatdata()
{int i,j;
cout<<“\n================================Menampilkan Data===============================\n\n”;
cout<<“===============================================================================\n”;
cout<<“||\tdata\t||\n”;
j=0;
for(i=0;i<a;i++)
{j=j+1;
cout<<“===============================================================================\n”;
cout<<“||\t”<<j<<“\t||”;
cout<<batas[i].nim<<“\t||”;
cout<<batas[i].nama<<“\t\t\t||”;
cout<<batas[i].kelas<<“\t\t||”;cout<<endl;
}
cout<<“=============================================================================== “;getch();clrscr();}

void hapusdata()
{int x,y;
cout<<“Hapus data ke-“;cin>>x;
y=x-1;
a–;
for(int i=y;i<a;i++)
{batas[i]=batas[i+1];}
clrscr();
cout<<“\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-“<<x<<” Terhapus ++++++++++++++++++++++++++++++”;
getch();clrscr();
}

int main()
{ int pilih;
char w;
cout<<“\n\n\n\n\n=============================PROGRAM STRUKTUR DATA=============================”;
cout<<“\n\n\n\n\n\n\n\n\n\t\t\t PROGRAM BY ADAM SANJAYA\n\n”;
cout<<“\t\t\t ASSALAMU’ALAIKUM”;
getch();clrscr();
awal:
cout<<“\n================================ PILIHAN MENU =================================”;
cout<<“\n1. Masukkan data”;
cout<<“\n2. Lihat Data”;
cout<<“\n3. Edit Data”;
cout<<“\n4. Susun Data”;
cout<<“\n5. Keluar”;
cout<<“\n\nMasukkan Pilihan : “;
cin>>pilih;
if(pilih==1)
{clrscr();inputdata();goto awal;}
if(pilih==2)
{clrscr();hapusdata();goto awal;}
if(pilih==3)
{clrscr();lihatdata();goto awal;}
if(pilih==4)
{clrscr();editdata();goto awal;}
if(pilih==5)

{clrscr();cout<<“Pilihan 1-5”;getch();clrscr();goto awal;}

}
