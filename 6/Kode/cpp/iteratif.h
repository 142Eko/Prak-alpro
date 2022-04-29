#include <iostream>
using namespace std;
class Array{
	private:
		int b1;
		int a[]={};
	public:
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
			int temp=a[0];
			for(int b=0;b<b1;b++){
				if(b ==b1-1){
					a[b]=temp;
				}
				else{
					a[b]=a[b+1];
				}
				cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
			}
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
			int b=b1-1;
			int temp=a[0];
			for(b;b>=0;b--){
				if(b == a[0]){
					a[b]=temp;
				}
				else{
					a[b]=a[b-1];
				}
				cout<<"Hasil dari a["<<b<<"] = "<<a[b]<<endl;
			}
		}
};
