#include <iostream>
using namespace std;
class iteratif{
	private:
		int i;
	public :
		void hit(){
				for (i = 1; i<=100 ;){
					if((i % 5 == 0) && (i % 7 == 0)){
						cout<<i<<endl;
					}
					i++;
				}
		}
	
};
