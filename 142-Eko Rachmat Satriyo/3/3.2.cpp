#include <iostream>
using namespace std;

class Bilbul{
	public:
		void input();
		void proses();
	private :
		int b[1000],j,max;
};
void Bilbul::input(){
	cout<<"Masukkan jumlah bilangan : ";
	cin>>j;
	cout<<"\n=========================\n";
}
void Bilbul::proses(){
	cout<<"Input "<<j<<" bilangan tersebut (enter untuk mengisi bilangan lain) : \n";
	for(int i= 0; i < j; i++){
		cin>>b[i];
	}
	cout<<endl;
	
	max = b[0];
	for(int i = 0; i < j; i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	
	cout<<"Angka terbesar adalah : "<<max<<"\n";
}
int main(){
	cout<<"Program menentukan nilai terbesar\n";
	cout<<"=================================\n";
	Bilbul c;
	c.input();
	c.proses();
}
