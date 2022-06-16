#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class gbm{
	private:
		int n= 3;
		int A[5][5],D[100];
		int temp;
		bool swap;
		int k = 0;
	public:
		int proses(){
			for(int i = 0; i <n ; i++){
				for(int j = 0; j<n; j++){
						cout<<"Masukkan A ["<<i<<"] ["<<j<<"] = ";
						cin>>A[i][j];
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
			cout<<"\n===========================\n";
			cout<<"\nMenjadi 1 dimensi\n";
			for(int i = 0; i <n ; i++){
				for(int j = 0; j<n; j++){
					D[k]=A[i][j];
					cout<<setw(3)<<D[k];
					k++;
				}
			}
			for(int i = 0; i < 9; i++){
				swap=false;
				for(int j = 0;j < 8; j++){
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
			}
			k=0;
			cout<<"\n===========================\n";
			cout<<"\nMenjadi 2 dimensi terurut\n";
			for(int i = 0; i <n ; i++){
				cout<<"|";
				for(int j = 0; j<n; j++){
					A[i][j]=D[k];
					cout<<setw(3)<<A[i][j];
					k++;
				}
				cout<<"  |"<<endl;
			}	
			cout<<"\n===========================\n";
	}
};
