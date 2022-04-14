#include <iostream>
using namespace std;
void MergeSort(int low, int high);
void Merge(int , int , int );
int A[50];
int main(){
 int i, elemen;
 cout<<"Berapa banyak elemen yang ingin disusun ? "; cin>>elemen;
 cout<<endl;
 cout<<"Masukkan " <<elemen<<" elemen: \n";cout<<endl;
 for(i=1;i<=elemen;i++){
   cout << "Elemen ke-"<<i<<" = ";
   cin>>A[i];
 }
 cout<<endl;
 MergeSort(1,elemen);
 cout<<endl;
 cout<<"Setelah di mergesort: \n\n";
 for(i=1;i<=elemen;i++){
    cout<< A[i] <<" ";
 }
 cout<< endl << endl;
 return 0;
}
//prosedure Mergesort
void MergeSort(int low, int high){
 int mid;
 if(low<high){
    mid = (low+high)/2;
    MergeSort(low,mid);
    MergeSort(mid+1, high);
    Merge(low, mid, high);
	}
}
//Prosedure Merge

void Merge(int low, int mid, int high){
 int h,i,j,k,b[50];
 h=low;
 i=low;
 j=mid+1;
 while((h<=mid)&&(j<=high)){
    if(A[h]<A[j]){
       b[i]=A[h];
       h++;
    }else{
       b[i]=A[j];
       j++;
    }
   i++;
 }
 if(h>mid){
    for(k=j;k<=high;k++){
      b[i]=A[k];
      i++;
    }
 }else{
    for(k=h;k<=mid;k++)

    {
      b[i]=A[k];
      i++;
    }
 }
 for(k=low;k<=high;k++){
    A[k]=b[k];
	}
}

