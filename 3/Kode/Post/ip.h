#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class pangkat{
	public:
		void input();
		void proses();
		void output();
	private:
		int y;
		float x;
		float hsl;
};

void pangkat::input(){
	cout<<"\nMasukkan X = ";cin>>x;
	cout<<"\nMasukkan Y = ";cin>>y;
}

void pangkat::proses(){
	hsl=pow(x,y);
}

void pangkat::output(){
	cout<<"==============================\n";
	cout<<"\nJadi "<<x<<" pangkat "<<y<<" adalah = "<<hsl;
}
