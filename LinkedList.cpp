#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
typedef struct node *simpul;
struct node
{
char Isi;
simpul Next;
};
//=====================
//==Prototype Function=
//=====================
void Sisip_Depan (simpul &L, char elemen );
void Sisip_Belakang (simpul &L, char elemen ) ;
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2 ) ;
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2 ) ;
void Hapus_Depan (simpul &L);
void Hapus_Belakang (simpul &L);
void Hapus_Tengah (simpul &L, char elemen);
void Cetak (simpul L);

//************************************
//**FUNCTION SISIP SIMPUL DI DEPAN****
//************************************
void Sisip_Depan (simpul &L, char elemen)
{
simpul baru; // = new simpul ;
baru = (simpul) malloc (sizeof(simpul));
baru->Isi = elemen ;
baru-> Next = NULL;
if (L== NULL)
L=baru;
else
{
baru->Next = L;
L= baru;
}
}
//************************************************
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU**
//************************************************
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2)
{
simpul bantu,baru;
baru = (simpul) malloc (sizeof(simpul));
baru->Isi = elemen1 ;
baru-> Next = NULL;
if (L== NULL)
cout << "List Kosong ............."<<endl;
else
{
bantu = L;
while (bantu ->Isi != elemen2) bantu = bantu -> Next;
baru->Next = bantu ->Next ;
bantu->Next = baru ;
}
}
//******************************************************
//**FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU********
//******************************************************
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2)
{
simpul bantu, baru;
baru = (simpul) malloc (sizeof(simpul));
baru->Isi = elemen1 ;
baru-> Next = NULL;
if (L== NULL)
cout<<"List Kosong.............."<<endl;
else
{
bantu = L;
while (bantu->Next->Isi != elemen2) bantu = bantu -> Next;
baru->Next = bantu ->Next ;
bantu->Next = baru ;
}
}
//**********************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG************
//**********************************************
void Sisip_Belakang (simpul &L, char elemen)
{
simpul bantu, baru;
baru = (simpul) malloc (sizeof(simpul));
baru->Isi = elemen ;
baru-> Next = NULL;
if (L== NULL)
L=baru;
else
{
bantu = L;
while (bantu->Next != NULL)
bantu= bantu -> Next ;
bantu->Next = baru ;
}
}
//**********************************************
//**FUNCTION MENCETAK ISI LINKED LIST*************
//**********************************************
void Cetak (simpul L)
{
simpul bantu ;
if (L==NULL)
cout<<"Linked List Kosong ........"<<endl;
else
{
bantu =L;
cout<<"Isi Linked List : ";
while (bantu ->Next != NULL)
{
cout<<bantu->Isi<<"-->";
bantu=bantu->Next;
}
cout<<bantu->Isi;
}
}
//*************************************
//**FUNCTION HAPUS SIMPUL DEPAN********
//*************************************
void Hapus_Depan (simpul &L)
{
simpul Hapus ;
if (L==NULL)
cout<<"Linked List Kosong.............";
else
{
Hapus = L;
L = L-> Next ;
Hapus -> Next = NULL;
free (Hapus);
}
}
//*************************************
//**FUNCTION HAPUS SIMPUL BELAKANG*****
//*************************************
void Hapus_Belakang (simpul &L)
{
simpul bantu, hapus;
if (L==NULL)
cout<<"Linked List Kosong.............";
else
{
bantu = L;
while (bantu ->Next->Next != NULL) bantu=bantu->Next;
hapus = bantu -> Next;
bantu -> Next = NULL;
free (hapus);
}
}
//*************************************
//**FUNCTION HAPUS SIMPUL DI TENGAH****
//*************************************
void Hapus_Tengah(simpul &L, char elemen)
{
simpul bantu,hapus;
if (L==NULL)
cout<<"Linked List Kosong.............";
else
{
bantu = L;
while (bantu ->Next->Isi != elemen) bantu=bantu->Next;
hapus = bantu -> Next;
bantu ->Next = bantu -> Next ->Next;
hapus -> Next = NULL;
free (hapus);
}
}
//======================eof==========================

int main (){
	int pilih;
	char dat,dat2;
	simpul L =NULL;
	cout<<"===========PROGRAM LINKED LIST=============\n";
	cout<<"MENU : \n";
	cout<<"1.INPUT DATA DEPAN\n";
	cout<<"2.INPUT DATA BELAKANG\n";
	cout<<"3.INPUT DATA TENGAH\n";
	cout<<"4.HAPUS DATA DEPAN\n";
	cout<<"5.HAPUS DATA BELAKANG\n";
	cout<<"6.HAPUS DATA TENGAH \n";
	cout<<"7.CETAK DATA\n";
	cout<<"Input Pilihan Nomor : \n";
	cin >> pilih ;
	if (pilih==1){
		cout <<"masukan huruf: \n"; cin >> dat;
		Sisip_Depan(L,dat);
		Cetak(L);
	}else if (pilih==2){
		cout <<"masukan huruf: \n"; cin >> dat;
		Sisip_Belakang(L,dat);
		Cetak(L);
	}else if (pilih ==3){
		cout<<endl<<endl<<"Masukan Huruf : "; cin>>dat;
		cout << "masukan huruf 2 : "; cin >> dat2;
		cout<<dat<<" Disisip Setelah "<<dat2<<endl;
		Sisip_Tengah1 (L, dat , dat2);
		Cetak (L);
	}else if (pilih==4){
		cout<<endl<<endl<<"Setelah Hapus Simpul Depan "<<endl;
		Hapus_Depan (L);
		Cetak (L);
	}else if (pilih ==5){
		cout<<endl<<endl<<"Setelah Hapus Simpul Belakang "<<endl;
		Hapus_Belakang (L);
		Cetak (L);
	}else if (pilih==6){
		cout<<"\n\nMasukkan Huruf Tengah Yang akan dihapus : ";cin>>dat;
		Hapus_Tengah (L,dat);
		Cetak (L);
	}else if (pilih==7){
		Cetak(L);
	}
}
