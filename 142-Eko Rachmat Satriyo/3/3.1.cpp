#include <iostream>
using namespace std;

class Bilbul{
	public:
		void input();
		void proses();
	private :
		int a,b;
};
void Bilbul::input(){
	cout<<"Masukkan a : \n";
	cin>>a;
	cout<<"Masukkan b : \n";
	cin>>b;
	cout<<"=============\n";
}
void Bilbul::proses(){
	if(a>b){
		cout<<"A adalah yang terbesar";
	}
	else{
		cout<<"B adalah yang terbesar";
	}
}
int main(){
	cout<<"Program menentukan nilai terbesar antara dua bilangan bulat\n";
	cout<<"===========================================================\n";
	Bilbul c;
	c.input();
	c.proses();
}

