#include <iostream>
#include <math.h>
using namespace std;

class disk{
	public:
		void input();
		void proses();
	private :
		int a,b,c;
		long d;
		float x1,x2;
};
void disk::input(){
	cout<<"Masukkan koefisien pangkat 2 : ";cin>>a;
	cout<<"Masukkan koefisien pangkat 1 : ";cin>>b;
	cout<<"Masukkan koefisien pangkat 0 : ";cin>>c;
	cout<<"\n===============================\n";
}
void disk::proses(){
	if(a==0){
		cout<<"Bukan pers kuadrat\n";
		cout<<"Harga akar = "<<-c/b;
	}
	else{
		d=(b*b)-(4*a*c);
		if(d>0){
			x1 = -b+(sqrt(d)/(2*a));
			x2 = -b-(sqrt(d)/(2*a));
			cout<<"Diskriminan = "<<d<<"\n";
			cout<<"	 X1 = "<<x1<<endl;
			cout<<"	 X2 = "<<x2<<endl;
		}
		else if(d==0){
			x1 = -b/(2*a);
			x2 = x1;
			cout<<"Diskriminan = 0\n";
			cout<<"	 X1 = "<<x1<<endl;
			cout<<"	 X2 = "<<x2<<endl;
		}
		else{
			cout<<"Akar imajiner\n";
		}
	}
}
int main(){
	cout<<"Program menentukan nilai terbesar\n";
	cout<<"=================================\n";
	disk z;
	z.input();
	z.proses();
}
