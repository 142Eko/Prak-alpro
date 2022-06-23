#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node *berikut;
};

main(){
	//langkah 1
	node *baru;
	baru=new node;
	baru->data=5;
	baru->berikut=NULL;
	cout<<"Isi data node baru adalah : "<<baru->data<<endl;
	
	//langkah2
	node *lain;
	lain=new node;
	lain->data=6;
	lain->berikut=NULL;
	cout<<"Isi data node baru adalah : "<<lain->data<<endl;
	
	//langkah 3
	baru->berikut=lain;
	cout<<"Isi data node lain dicetak dari node baru adalah : ";
	cout<<baru->berikut->data<<endl;
	
	//langkah4
	node *kepala=baru;
	cout<<"Mencetak node pertama dari pointer kepala : ";
	cout<<kepala->data<<endl;
	cout<<"Mencetak node kedua dari pointer kepala : ";
	cout<<kepala->berikut->data<<endl;
	
	//langkah5
	cout<<"Menggunakan perulangan untuk mencetak setiap data pada rantai\n";
	node *jalan = kepala;
	int i = 1;
	while (jalan != NULL){
		cout<<"Data ke-"<<i<<" > "<<jalan->data<<endl;
		i++;
		jalan=jalan->berikut;
	}
	
	//langkah 6
	cout<<"Mencetak node pertama dari pointer kepala : ";
	cout<<kepala->data<<endl;
	cout<<"Mencetak node kedua dari pointer kepala : ";
	cout<<kepala->berikut->data<<endl;
}
