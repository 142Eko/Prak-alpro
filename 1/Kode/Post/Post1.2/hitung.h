using namespace std;
class Hitung{
	friend ostream& operator<<(ostream&,const Hitung&);
	friend istream& operator>>(istream&,Hitung &);
public :
	Hitung ();
	void hsl(){
		x=x2-x1;
		y=y2-y1;
		AB= sqrt((x*x)+(y*y));
	}
private :
	int x,y,x1,x2,y1,y2,AB;
};
