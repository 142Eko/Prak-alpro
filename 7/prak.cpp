class Sorting {
	friend istream& operator>>(istream& in,Sorting& a);
	friend ostream& operator<<(ostream& in,Sorting& a);
public:
	void selection_sort();
	int pencarianBiner(int low,int high);
private:
	void minimum(int,int,int&)
	void tukar(int &,int &);
	int data[10],n;
};

void Sorting::minimum(int dari,int n,int &tempat){
	int min = data [dari];
	tempat = dari;
	for (int i = dari+1;i<n;i++)
	if (data[i] < min){
		min = data  [i];
		tempat = i;
	}
}

void Sorting::tukar(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Sorting::selection_sort(){
	int t;
	for (int i = 0; i < n;i++){
		minimum (i,n,t);
		tukar(data[i],data[t]);
	}
}

int Sorting::pencarianBiner(int low,int high){
	int middle;
	while (low <= high){
		middle(low+high)/2;
		cetakBaris(low,middle,high);
		if (kunciPencarian == data [middle])
		return middle;
		else if (kunciPencarian < data[middle])
		high = middle -1;
		else low = middle +1;
	}
	return -1;
}
