#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int i, j, baris, kolom, m1[10][10], m2[10][10], hasil[10][10];
main(){
    do
    {
        cout<<"Jumlah Baris = ";cin>>baris;
        cout<<"Jumlah Kolom = ";cin>>kolom;
    }
  
    while
    ((baris>10)||(kolom>10));
    cout<<"\nMatrix A"<<endl;
  
    for(i=0;i<baris;i++)
    for(j=0;j<kolom;j++){
        cout<<"data ["<<i<<","<<j<<"] = ";cin>>m1[i][j];
    }
    cout<<"\nMatrix B"<<endl;
  
    for(i=0;i<baris;i++)
    for(j=0;j<kolom;j++){
        cout<<"data ["<<i<<","<<j<<"] = ";cin>>m2[i][j];
    }
  
    for(i=0; i<baris; i++)
    for(j=0; j<kolom; j++)
    hasil[i][j] = m1[i][j] + m2[i][j];
    cout<<"\nHasil :"<<endl;
    cout<<"\n   Matrix A    +    Matrix B    =    Matrix C";
  
    for(i=0; i< baris; i++){
        cout<<'\n';for(j=0; j<kolom; j++)cout << setw(4) << m1[i][j];
        cout<<"     ";for(j=0; j<kolom; j++)cout << setw(4) << m2[i][j];
        cout<<"     ";for(j=0; j<kolom; j++)cout << setw(4) << hasil[i][j];
        cout<<endl;}
getch();
}
