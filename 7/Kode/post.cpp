#include <iostream>
#include <conio.h>
using namespace std;
class buble{
	private:
		int a[8]={9,2,1,4,11,10,18,6};
		int temp;
		bool swap;
	public:
		int output(){
			for(int i = 0; i < 8;i++){
				cout<<"["<<a[i]<<"]";
			}
			cout<<endl;
		}
		int proses(){
			for(int i = 0; i < 8; i++){
				swap=false;
				for(int j = 0;j < 7; j++){
					if(a[j]>a[j+1]){
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
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
};
int main(){
	buble p;
	cout<<"Nilai awal = ";p.output();
	p.proses();
}
