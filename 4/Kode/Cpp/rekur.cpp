#include <iostream>
using namespace std;

class rekursif{
	private:
		int x,y;
	public :
		int hit(int x,int y){
			if (x<100){
				if((x % 5 == 0) && (x % 7 == 0)){
						cout<<x<<endl;
					}
					return hit(x+1,y);
			}
		}
	
};

main(){
	cout<<"Bilangan dari 1 - 100 yang habis dibagi 5 dan 7 dengan rekursif\n";
	rekursif e;
	e.hit(1,100);
}
