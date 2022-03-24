#include <iostream>
#include <conio.h>
using namespace std;
class Kabisat{
	friend ostream& operator<<(ostream&,const Kabisat&);
	friend istream& operator>>(istream&,Kabisat&);
public :
	Kabisat();
	void hsl(){
		if(thn%4==0){
			cout<<"\nTahun "<<thn<<" adalah tahun kabisat";
		}
		else{
			cout<<"\nTahun "<<thn<<" bukan tahun kabisat";
		}
	}
private :
	int thn;
};

istream&operator>>(istream& in,Kabisat& Tahun){
	cout<<"Masukkan tahun : ";
	in>>Tahun.thn;
	return in;	
}

Kabisat::Kabisat(){
	cout<<"\tProgram Menentukan Tahun Kabisat\n\n";
	cout<<"========================================\n\n";
}
