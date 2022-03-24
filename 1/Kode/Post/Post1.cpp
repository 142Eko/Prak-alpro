#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Hitung{
	friend ostream& operator<<(ostream&,const Hitung&);
	friend istream& operator>>(istream&,Hitung &);
public :
	Hitung ();
	void hsl(){
		x=x2-x1;
		y=y2-y1;
		AB= sqrt((x*x)+(y*y));
	}
private :
	int x,y,x1,x2,y1,y2,AB;
};
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
main(){
	Hitung c;
	cin>>c;
	c.hsl();
	cout<<c;
	return 0;
}
