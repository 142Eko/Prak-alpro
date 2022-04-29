#include "iteratif.h"
main(){
	Array p;
	int op;
	cout<<"Ketik 1 (kiri) | 2 (kanan)\n";
	cout<<"Pilih = ";cin>>op;
	if(op==1){
		p.kiri();
	}
	else{
		p.kanan();
	}

}
