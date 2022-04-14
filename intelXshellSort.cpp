		#include<stdio.h>
		#include<stdlib.h>
		#include<string.h>
		#include<iostream>
		using namespace std;
		int sort_function(const void *a, const void *b);
		char list[8][9]={"suka","aku","sama","kamu","dulu","sampai","dari","sekarang"};
		int main(void){
		 int x,y;
		 cout << ("\t\t=======PROGRAM SUSUN KATA===========\n\n");
		 cout << ("Kata Sebelum di Susun : \n");
		  for(y=0;y<8;y++)
		 cout<< ("%s ",list[y]);
		 cout << ("\n\nKata Setelah di Susun : \n");
		 qsort((void *)list, 8, sizeof(list[0]), sort_function);          
		  for(x=0;x<8;x++)
		 cout << ("%s\n",list[x]);
		return 0;
		}
		int sort_function(const void *a, const void *b)
		{
		 return (strcmp((char *)a, (char *)b));
		 }
