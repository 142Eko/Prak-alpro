#include "hitung.h"
Hitung::Hitung(){
	cout<<"\tProgram Menghitung jarak antara dua titik A(x1,y1) dan B (x2,y2)\n\n";
	cout<<"======================================================================\n\n";
}
istream&operator>>(istream& in,Hitung& masukkan){
	cout<<"Masukkan nilai x1     : ";
	in>>masukkan.x1;
	cout<<"Masukkan nilai x2     : ";
	in>>masukkan.x2;
	cout<<"Masukkan nilai y1     : ";
	in>>masukkan.y1;
	cout<<"Masukkan nilai y2     : ";
	in>>masukkan.y2;
	return in;
}
ostream& operator<<(ostream&out,const Hitung&hasil){
	out<<"==========================\n";
	out<<"Jadi jarak titik AB   : "<<hasil.AB<<endl;
	return out;
}
