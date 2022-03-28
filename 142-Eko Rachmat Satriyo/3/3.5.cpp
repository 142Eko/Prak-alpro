#include <iostream>
using namespace std;
class hari{
	public:
		void input();
		void proses();
		void output();
	private:
	int x;
	string h;
};

void hari::input(){
	cout<<"Masukkan hari ke-";cin>>x;
}

void hari::proses(){
	switch(x){
		case 1: h="Senin";break;
		case 2: h="Selasa";break;
		case 3: h="Rabu";break;
		case 4: h="Kamis";break;
		case 5: h="Jumat";break;
		case 6: h="Sabtu";break;
		case 7: h="Minggu";break;
		default: h="Di luar range";break;
	}
}

void hari::output(){
	cout<<"Hari ke "<<x<<" adalah hari "<<h;
}

main(){
	cout<<"Program konversi hari\n";
	cout<<"=====================\n";
	hari j;
	j.input();
	j.proses();
	j.output();
}
