#include <iostream>
using namespace std;
class For{
	public:
		void input();
		void proses();
	private:
		int i,x,y;
		float pangkat;
};

void For::input(){
	cout<<"Masukkan x = ";cin>>x;
	cout<<"Masukkan y = ";cin>>y;	
}

void For::proses(){
	pangkat = 1;
	if(y>0){
		for(i = 1 ; i <= y; i++){
		pangkat *= x;		
		}
		cout<<"\n==================\n";
		cout<<x<<" pangkat "<<y<<" = "<<pangkat<<endl;
	}
	
	else{
		for(i = -1 ; i >= y; i--){
		pangkat *= x;		
		}
		cout<<"\n==================\n";
		cout<<"Dalam pecahan\n";
		cout<<x<<" pangkat "<<y<<" = "<<"1/"<<pangkat<<endl;
		cout<<"\n==================\n";
		cout<<"Dalam desimal ";
		pangkat=1/pangkat;
		cout<<x<<" pangkat "<<y<<" = "<<pangkat<<endl;
	}
}

main(){
	cout<<"Menghitung hasil X Pangkat Y\n";
	cout<<"============================\n";
	For p;
	p.input();
	p.proses();
}
