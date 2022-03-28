#include <iostream>
using namespace std;
class konv{
	public:
		void input();
		void proses();
		void output();
	private:
		int x;
		char nilai_huruf;
};

void konv::input(){
	cout<<"Masukkan nilai (0-100) = "; cin>>x;
}

void konv::proses(){
	if((x > 0) && (x <= 20)){
		nilai_huruf = 'E';
	}
	else if((x > 21) && (x <= 40)){
		nilai_huruf = 'D';
	}
	else if((x > 41) && (x <= 60)){
		nilai_huruf = 'C';
	}
	else if((x > 61) && (x <= 80)){
		nilai_huruf = 'B';
	}
	else{
		nilai_huruf = 'A';
	}
	
}

void konv::output(){
	cout<<"Jadi nilai "<<x<<" = "<<nilai_huruf;
}

main(){
	cout<<"Program konversi nilai\n";
	cout<<"======================\n";	
	konv p;
	p.input();
	p.proses();
	p.output();
}
