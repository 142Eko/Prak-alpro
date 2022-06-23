#include <iostream>
using namespace std;

class node{
	public:
    char data;
    node *point;
};
           
int main(){
    
	node *a;
	a = new node;
    int satu;
    cout << "Isi data node = ";
    cin >> satu;
    a -> data = satu;
    a -> point = NULL;
	
	
	node *b;
    b = new node;
    int dua;
    cout << "Isi data node = ";
    cin >> dua;
    b -> data = dua;
    b -> point = NULL;
	
	node *c;
    c = new node;
    int tiga;
    cout << "Isi data node = ";
    cin >> tiga;
    c -> data = tiga;
    c -> point = NULL;
    
	node *d;
    d = new node;
    int empat;
    cout << "Isi data node = ";
    cin >> empat;
    d -> data = empat;
    d -> point = NULL;
    
	
	cout << endl;
    a -> point = b;
    cout << "Isi data node lain dicetak dari node baru adalah = ";
    cout << a -> point -> data << endl;
    
	b -> point = c;
    cout << "Isi data node lain dicetak dari node baru adalah = ";
    cout << b -> point -> data << endl;
    
	c -> point = d;
    cout << "Isi data node lain dicetak dari node baru adalah = ";
    cout << c -> point -> data << endl;
    
	
	cout << endl;
    node *kepala = a;
    cout << "Node 1 dari pointer = ";
    cout << kepala -> data << endl;
    
	cout << "Node 2 dari pointer = ";
    cout << kepala -> point -> data << endl;
    
	cout << "Node 3 dari pointer = ";
    cout << b -> point -> data << endl;
    
	cout << "Node 4 dari pointer = ";
    cout << c -> point -> data << endl;
    
	cout << endl;
    cout << "Rantai Data"<<endl;
    node *jalan = kepala;
    int i = 1;
    while(jalan !=NULL){
    cout << "Data ke-" << i << " = " << jalan -> data << endl;
    i++;
    jalan = jalan -> point;
	}
	
	cout<< endl;
	cout << "Banyak Data = "<< i-1 << endl;
}
