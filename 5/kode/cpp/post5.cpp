#include <iostream>
using namespace std;
class post5{
	private:
		int i =1 ,n;
		float j,hsl =0;
	public:
		float hitung(int i,int n,float j)
		{
			if(i > n)
			{
				return j;
			}
			else
			{
				if(i%2 == 0)
				j-=1/i;
				
				else
				j+=1/i;
				return hitung(i + 1,n,j);
			}
		}
		void inop(){
			cout<<"Masukkan suku ke = ";cin>>n;
			cout<<"Hasil adalah 	 = "<<hitung(i,n,hsl);
		}
};
main(){
	post5 p;
	p.inop();
}

