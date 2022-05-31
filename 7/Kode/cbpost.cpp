#include <iostream>
#include <conio.h>
using namespace std;
void tampilkan_larik(int data[], int n)
	{
	int i;
	for(i=0;i<n;i++)
	cout<<data[i]<<" ";
	cout<<"\n";
	}
void buble_sort(int data[],int n){
	bool swap;
	int tahap,j,tmp;
	for (tahap=1;tahap<n;tahap++){
		swap=false;
		for (j=0;j<n-tahap;j++)
			if (data[j]>data[j+1]){	
			tmp=data[j];
			data[j]=data[j+1];
			data[j+1]=tmp;
			swap =true;
			}
		if(swap==false){
		break;}
	cout<<"hasil tahap "<<tahap<<" : ";
	tampilkan_larik (data,n);		
	}
}

int main(){
	int jum_data=8;
	int i;
	int data[]={9,2,1,4,11,10,18,6};
	
	buble_sort(data, jum_data);
	cout<<endl;
	cout<<"Hasil Pengurutan: \n";
	tampilkan_larik(data,jum_data);
	getch();
}
