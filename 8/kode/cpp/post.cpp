#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class gbm{
	private:
		int n= 3;
		int A[5][5],B[5][5],C[5][5],D[100];
		int temp;
		bool swap;
		int k = 3;
	public:
		int proses(){
			for(int i = 0; i <n ; i++){
				for(int j = 0; j<n; j++){
						cout<<"Masukkan A ["<<i<<"] ["<<j<<"] = ";
						cin>>A[i][j];
						cout<<"Masukkan B ["<<i<<"] ["<<j<<"] = ";
						cin>>B[i][j];
						C[i][j]=A[i][j];
						C[i+n][j]=B[i][j];
				}
				cout<<endl;
			}
			cout<<"\n===Array A===\n";
			for(int i = 0; i <n ; i++){
				cout<<"|";
				for(int j = 0; j<n; j++){
						cout<<setw(3)<<A[i][j];
				}
				cout<<"  |"<<endl;
			}
			cout<<"\n===Array B===\n";
			for(int i = 0; i <n ; i++){
				cout<<"|";
				for(int j = 0; j<n; j++){
						cout<<setw(3)<<B[i][j];
				}
				cout<<"  |"<<endl;
			}
			cout<<"\n===Array AB===\n";
			for(int i = 0; i <(n+n) ; i++){
				cout<<"|";
				for(int j = 0; j<n; j++){
						cout<<setw(3)<<C[i][j];
				}
				cout<<"  |"<<endl;
			}
			cout<<"\n=====================================================================\n";
			cout<<"\nMenjadi 1 dimensi\n";
			for(int i = 0; i <(n+n) ; i++){
				for(int j = 0; j<n; j++){
					D[k]=C[i][j];
					cout<<setw(3)<<D[k];
					k++;
				}
			}
			cout<<"\n=====================================================================\n";
			cout<<"\nDiurutkan\n";
			cout<<"\n=====================================================================\n";
			for(int i = 0; i < 18; i++){
				swap=false;
				for(int j = 0;j < 17; j++){
					if(D[j]>D[j+1]){
							temp=D[j];
							D[j]=D[j+1];
							D[j+1]=temp;
						swap =true;
					}
				}
				if(swap==false){
					break;
				}
				cout<<"Proses ke-"<<i+1<<"= ";
				output();
			}	
	}
	int output(){
			for(int i = 0; i < 18;i++){
				cout<<setw(3)<<D[i];
			}
			cout<<endl;
		}
};

main(){
	gbm cek;
	cek.proses();
	cout<<endl;
	return 0;
}
