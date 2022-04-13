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
