#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class gbm{
	private:
		int n= 4;
		string K[5][5],T[5][5],P[5][5];
		string k[10],t[10],p[10];
		int ke = 0,te=0,pa=0;
	public:
		int proses(){
			cout<<"Input Nama (Kesehatan)\n";
			cout<<"\n===========================\n";
			for(int i = 0; i <n ; i++){
				cout<<"Masukkan nama = ";
				getline(cin,k[i]);
			}
			
			cout<<"\nInput Nama (Teknologi)\n";
			cout<<"\n===========================\n";
			for(int i = 0; i <n ; i++){
				cout<<"Masukkan nama = ";
				getline(cin,t[i]);
			}
			cout<<"\nInput Nama (Pangan)\n";
			cout<<"\n===========================\n";
			for(int i = 0; i <n ; i++){
				cout<<"Masukkan nama = ";
				getline(cin,p[i]);
			}
			//2 dimensi
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					K[i][j]=k[ke];
					ke++;
				}
			}
			//2 dimensi
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					T[i][j]=t[te];
					te++;
				}
			}
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					P[i][j]=p[pa];
					pa++;
				}
			}
			cout<<"\n---------------------------------------------------------\n";
			cout<<"Departemen\t| ID Karyawan \t|\tNama\t\t\n";
			cout<<"\n---------------------------------------------------------\n";
			cout<<"Kesehatan\t| \t\t|\t\t\t\n";
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cout<<"\t\t| K0"<<j+1<<" \t\t| "<<K[i][j]<<endl;
				}
			}
			cout<<"\n---------------------------------------------------------\n";
			cout<<"Teknologi\t| \t\t|\t\t\t\n";
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cout<<"\t\t| T0"<<j+1<<" \t\t| "<<T[i][j]<<endl;
				}
			}
			cout<<"\n---------------------------------------------------------\n";
			cout<<"Pangan\t\t| \t\t|\t\t\t\n";
			for (int i = 0 ; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cout<<"\t\t| P0"<<j+1<<" \t\t| "<<P[i][j]<<endl;
				}
			}
			cout<<"\n---------------------------------------------------------\n";
	}
};

main(){
	gbm cek;
	cek.proses();
	cout<<endl;
	return 0;
}
