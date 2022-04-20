#include <iostream>
using namespace std;
class perulangan{
	public:
		void ulang_for(int);
		void ulang_rekursif(int);
	private:
		int n;
};
void perulangan::ulang_for(int n){
			for(int i = 1; i<= n;i++){
				cout<<i<<" ";
			}
		}
		void perulangan::ulang_rekursif(int n){
			int i = 4;
			while(i>=n){
				cout<<i<<" ";
				i--;
			}
		}
main(){
	perulangan x;
	cout<<"Menggunakan cara iteratif \n ";
	x.ulang_for(4);
	cout<<"\nMenggunakan cara rekursif \n ";
	x.ulang_rekursif(4);
}
