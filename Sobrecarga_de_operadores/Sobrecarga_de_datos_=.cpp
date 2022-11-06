#include <iostream>
using namespace std;

class Manzanas{
	int num;
public:
	Manzanas(int n=0):num(n){};
	friend ostream& operator<<(ostream& os, Manzanas ms){
		os <<ms.num<<"manzanas"<<endl;
		return os;
	}
	friend Manzanas operator+(Manzanas a, Manzanas b){
		return Manzanas(a.num+b.num);
	}
	Manzanas operator =(Manzanas a){
		num = a.num;
		return *this;
	}
};

int main(){
	Manzanas a(3),b(4),c(5),d,e;
	e= d = a+b+c;
	e= d+a+b;
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;
}