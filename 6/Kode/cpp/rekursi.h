#include <iostream>
using namespace std;
class Array{
	private:
		int b1;
		int a[]={};
	public:
		int prori(int b1,int b,int temp){
			if(b<b1){
				if(b==b1-1){
					a[b]=temp;
					cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
				}
				else{
					a[b]=a[b+1];
					cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
				}
				return prori(b1,b+1,temp);
			}
		}
		int pronan(int b1,int b,int temp){
			if(b>=0){
				if(b==a[0]){
					a[b]=temp;
					cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
				}
				else{
					a[b]=a[b-1];
					cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
				}
				return pronan(b1,b-1,temp);
			}
		}
		void kiri(){
			cout<<"============================\n";
			cout<<"Masukkan Banyaknya elemen = ";cin>>b1;
			cout<<"============================\n";
			for( int b=0;b<b1;b++){
			cout<<"Masukkan nilai a["<<b<<"] = ";cin>>a[b];
			}
			cout<<"============================\n";
			cout<<"Array geser kiri\n";
			cout<<"============================\n";
			prori(b1,0,a[0]);
		}
		void kanan(){
			cout<<"============================\n";
			cout<<"Masukkan Banyaknya elemen = ";cin>>b1;
			cout<<"============================\n";
			for( int b=0;b<b1;b++){
				cout<<"Masukkan nilai a["<<b<<"] = ";cin>>a[b];
			}
			cout<<"============================\n";
			cout<<"Array geser kanan (baca dari bawah)\n";
			cout<<"============================\n";
			pronan(b1,b1-1,a[0]);
		}
};
