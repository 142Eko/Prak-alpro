#include <iostream>
#include <conio.h>
using namespace std;

class Operator{
	friend ostream&operator<<(ostream&,Operator&);
	friend istream&operator<<(istream&,Operator&);
	public:
		long faktorial();
		long faktorial(int);
	private:
		int n;
		long hasil;
};

long Operator::faktorial()                     
