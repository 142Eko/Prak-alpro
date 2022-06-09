#include <iostream>
using namespace std;
main(){
	int baris,kolom;
	cout<<"\t======Program Mengecek Matrix Identitas=====\n";
	cout<<"\nMasukkan banyak baris = ";cin>>baris;
	cout<<"\nMasukkan banyak kolom = ";cin>>kolom;
	cout<<"\n=========================\n";
	if(baris==kolom){
		cout<<"\nMatrix "<<baris<<"x"<<kolom<<" merupakan matriks identitas\n\n";
		for(int i = 0; i < baris; i++){
		cout<<"     |";
		for(int j = 0; j < kolom; j++){
			if(i==j){
				cout<<" 1 ";
			}
			else{
				cout<<" 0 ";
			}
		}
		cout<<"|"<<endl;
	}
	}
	else{
		cout<<"\n Matrix "<<baris<<"x"<<kolom<<" bukan matriks identitas\n";
	}
}
