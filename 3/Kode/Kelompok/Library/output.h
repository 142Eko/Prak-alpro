#include <iostream>
using  namespace std;

class OUTPUT{
	public:
		void cetak(){
			cout<<"STRUK COBA\n";
			cout<<"===============\n";
			cout<<"Nama menu    = "<<data[0]<<endl;
			cout<<"Total harga  = "<<data[1]<<endl;
			cout<<"Harga diskon = "<<data[2]<<endl;
			cout<<"===============\n";
			cout<<"Total bayar  = "<<data[3]<<endl;
		}
		void dptdata(){
			ambil_data.open("cb.txt");
			while(!ambil_data.eof()){
				ambil_data>>data[index];
				index+=1;
			}
			ambil_data.close();
		}
	private:
			private:
			ifstream ambil_data;
			string data[30];
			int index=0;
};
