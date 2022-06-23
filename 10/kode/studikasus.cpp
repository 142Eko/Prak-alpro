#include <iostream>
using namespace std;

class node{
	public:
		string data;
		node *berikut;
};
int main(){
  cout<<"Input Data Siswa"<<endl;
  cout<<"Format = Nama NIm"<<endl;
  
	node *satu;
	satu = new node;
	int i = 1;
	cout<<"Data Siswa ke-"<<i<<" = ";
	getline(cin,satu->data);
	cin.ignore();
	satu->berikut = NULL;
	i++;

	node *dua;
	dua = new node;
	cout<<"Data Siswa ke-"<<i<<" = ";
	getline(cin,dua->data);
	cin.ignore();
	dua->berikut = NULL;
	i++;
	
	node *tiga;
	tiga = new node;
	cout<<"Data Siswa ke-"<<i<<" = ";
	getline(cin,tiga->data);
	cin.ignore();
	tiga->berikut = NULL;
	i++;
	
	node *empat;
	empat = new node;
	cout<<"Data Siswa ke-"<<i<<" = ";
	getline(cin,empat->data);
	cin.ignore();
	empat->berikut = NULL;
	i++;
	
	node *lima;
	lima = new node;
	cout<<"Data Siswa ke-"<<i<<" = ";
	getline(cin,lima->data);
	cin.ignore();
	lima->berikut = NULL;
	i++;
	
	satu->berikut = dua;
	dua->berikut = tiga;
	tiga->berikut = empat;
	empat->berikut = lima;
	
	node *kepala = satu;

	node *jalan = kepala;
	i = 1;
  cout<<"Daftar Siswa\n";
	while (jalan != NULL) {
		cout << i << ". " << jalan->data << endl;
		i++;
		jalan = jalan->berikut;
	}
}
