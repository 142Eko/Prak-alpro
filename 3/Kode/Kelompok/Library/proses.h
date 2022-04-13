#include <iostream>
using  namespace std;

class PROSES{
	public:
		void cetak(){
			cout<<"Anda Sebagai Input\n";
		}
		void dptdata(){
			ambil_data.open("output.txt");
			bool ag=true;
			while(!ambil_data.eof()){
				if(ag){
					ambil_data>>bnyk_ag;
					ag = false;
				}
				else{
					ambil_data>>bnyk_ab;
				}
			}
			ambil_data.close();
		}
		private:
			ifstream ambil_data;
			int bnyk_ag;
			int bnyk_ab;
};
