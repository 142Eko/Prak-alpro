#include "prak.h"
main(){
	Vektor x,y,z;
	cin>>x;
	cout<<x;
	cin>>y;
	cout<<y;
	z.penjumlahan_vektor(x,y);
	cout<<"\nHasil penjumlahan 2 vektor\n"<<z;
	z.perkalian_vektor(3,x);
	cout<<"\nHasil perkalian skalar dengan vektor\n"<<z;
	z.perkalian_vektor(3,y);
	cout<<"\nHasil perkalian skalar dengan vektor\n"<<z;
	getch(); 
}
