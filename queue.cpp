	#include <iostream>
	#include <conio.h>
	#include <stdlib.h>
	using namespace std;
	typedef struct node *simpul ;
	struct node
	{
	char Isi ;
	simpul Next ;
	};
	//======================
	//==Prototype Function=====
	//======================
	void Sisip_Belakang (simpul &L, char elemen ) ;
	void Hapus_Depan (simpul &L);
	void Cetak (simpul L);
	
		//*************************************
	//**FUNCTION SISIP SIMPUL DI BELAKANG****
	//*************************************
	void Sisip_Belakang (simpul &L, char elemen)
	{
	simpul bantu, baru;
	baru = (simpul) malloc (sizeof(simpul));
	baru-> Isi = elemen;
	baru -> Next = NULL;
	if (L == NULL)
	L= baru;
	else
	{
	bantu =L;
	while (bantu->Next != NULL)
	bantu =bantu->Next;
	bantu->Next=baru;
	}
	}
	//****************************************
	//**FUNCTION MENCETAK ISI LINKED LIST*******
	//****************************************
	void Cetak (simpul L)
	{
	simpul bantu;
	if(L==NULL)
	cout<<"Linked List Kosong..........\n";
	else
	{
	bantu=L;
	cout<<"\nIsi Linked List : ";
	while (bantu->Next != NULL)
	{
	cout<<bantu->Isi<<"->";
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
	simpul Hapus;
	if(L==NULL)
	cout<<"Linked List Kosong..........\n";
	else
	{
	Hapus=L;
	L = L->Next;
	Hapus->Next = NULL;
	free(Hapus);
	}
	}
	//=========================eof========================

	//====================
	//==Function Main=======
	//====================
	main()
	{
	char huruf;
	char out ='y';
	simpul L = NULL; //Pastikan bahwa L kosong
	int i,pilih;
	menu :
	cout<<"==OPERASI PADA SINGLE LINKED LIST=="<<endl<<endl;
	cout <<"============MENU=============="<<endl;
	cout<<"1.Input Data\n";
	cout<<"2.Hapus Data\n";
	cout<<"3.Cetak Data\n";
	cout <<"tentukan pilihan : ";
	cin >> pilih;
	if(pilih==1){
		cout<<"masukan Data = \n";
		cin >> huruf;
		Sisip_Belakang( L,huruf);
	}else if(pilih==2){
		Hapus_Depan(L);
	}else if (pilih==3){
		Cetak(L);
	}
	cout <<"kembali ke menu : ";
	cin >> out;
	while (out=='y'){
		goto menu;
	}
	
	return 0;
	getch ( ) ;
	}

