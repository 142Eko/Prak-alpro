#include <iostream>
using namespace std;

class Studi{
	public:
		void kode_buku();
	private:
};
void Studi::kode_buku(){
	int kode_buku[4][3];
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout<<"Input Kode Buku = ";
			cin>>kode_buku[i][j];
		}
	}
  /*
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout<<kode_buku[i][j]<<" ";
		}
		cout<<endl;
	}
*/

	string judul_buku[4][3];
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout<<"Input Judul Buku = ";
			cin>>judul_buku[i][j];
		}
	}
  /*
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout<<judul_buku[i][j]<<" ";
		}
		cout<<endl;
	}
*/

	//novel
	int knovel[10];
	string jnovel[10];
	int k=0,l=0;
	//kode buku
	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			knovel[k]=kode_buku[i][j];
			k++;
		}
	}
	//judul buku
	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			jnovel[l]=judul_buku[i][j];
			l++;
		}
	}
	/*output kode buku
	cout<<"kode\n";
	for(int i=0; i<3; i++){
		cout<<knovel[i]<<" ";
	}
	cout<<endl;
	//output judul buku
	cout<<"judul\n";
	for(int i=0; i<3; i++){
		cout<<jnovel[i]<<" ";
	}
	cout<<endl;
	*///======================================================================
	
	//komik
	int kkomik[10];
	string jkomik[10];
	int m=0,n=0;
	//kode buku
	for(int i=0; i<1; i++){
		for(int j=3; j<6; j++){
			kkomik[m]=kode_buku[i][j];
			m++;
		}
	}
	//judul buku
	for(int i=0; i<1; i++){
		for(int j=3; j<6; j++){
			jkomik[n]=judul_buku[i][j];
			n++;
		}
	}
	/*output kode buku
	cout<<"kode\n";
	for(int i=0; i<3; i++){
		cout<<kkomik[i]<<" ";
	}
	cout<<endl;
	//output judul buku
	cout<<"judul\n";
	for(int i=0; i<3; i++){
		cout<<jkomik[i]<<" ";
	}
	cout<<endl;
	*/
	//============================
	
	//ensiklopedia
	int kpedia[10];
	string jpedia[10];
	int o=0,p=0;
	//kode buku
	for(int i=0; i<1; i++){
		for(int j=6; j<9; j++){
			kpedia[o]=kode_buku[i][j];
			o++;
		}
	}
	//judul buku
	for(int i=0; i<1; i++){
		for(int j=6; j<9; j++){
			jpedia[p]=judul_buku[i][j];
			p++;
		}
	}
	/*output kode buku
	cout<<"kode\n";
	for(int i=0; i<3; i++){
		cout<<kpedia[i]<<" ";
	}
	cout<<endl;
	//output judul buku
	cout<<"judul\n";
	for(int i=0; i<3; i++){
		cout<<jpedia[i]<<" ";
	}
	cout<<endl;
	*/
	//======================================================================
	
	//dongeng
	int kdongeng[10];
	string jdongeng[10];
	int q=0,r=0;
	//kode buku
	for(int i=0; i<1; i++){
		for(int j=9; j<12; j++){
			kdongeng[q]=kode_buku[i][j];
			q++;
		}
	}
	//judul buku
	for(int i=0; i<1; i++){
		for(int j=9; j<12; j++){
			jdongeng[r]=judul_buku[i][j];
			r++;
		}
	}
	/*output kode buku
	cout<<"kode\n";
	for(int i=0; i<3; i++){
		cout<<kdongeng[i]<<" ";
	}
	cout<<endl;
	//output judul buku
	cout<<"judul\n";
	for(int i=0; i<3; i++){
		cout<<jdongeng[i]<<" ";
	}
	cout<<endl;
	cout<<"selesai"<<endl;
	*/
	
	//output tabel
	cout<<"Jenis buku = NOVEL"<<endl;
	cout<<"KODE BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<knovel[i];
	}
	cout<<endl;
	cout<<"JUDUL BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<jnovel[i]<<endl;
	}
	cout<<endl;
	
	cout<<"Jenis buku = KOMIK"<<endl;
	cout<<"KODE BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<kkomik[i]<<endl;
	}
	cout<<endl;
	cout<<"JUDUL BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<jkomik[i]<<endl;
	}
	cout<<endl;
	
	cout<<"Jenis buku = ENSIKLOPEDIA"<<endl;
	cout<<"KODE BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<kpedia[i]<<endl;
	}
	cout<<endl;
	cout<<"JUDUL BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<jpedia[i]<<endl;
	}
	cout<<endl;
	
	cout<<"Jenis buku = DONGENG"<<endl;
	cout<<"KODE BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<kdongeng[i]<<endl;
	}
	cout<<endl;
	cout<<"JUDUL BUKU = "<<endl;
	for(int i=0; i<3; i++){
		cout<<jdongeng[i]<<endl;
	}
	cout<<endl;
}
int main(){
	Studi x;
	x.kode_buku();
}
