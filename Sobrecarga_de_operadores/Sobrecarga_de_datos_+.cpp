#include <iostream>
using namespace std;

class Manzanas{
	int num;
public:
	Manzanas(int n):num(n){};
	
	friend Manzanas operator+(Manzanas, Manzanas);
	
	friend ostream& operator<<(ostream& os, Manzanas ms){
		os<<ms.num<<" manzanas"<<endl;
		return os;
	}
};
typedef Manzanas A;
A operator+(A a,A b){
	A res(a.num+b.num);
	return res;
}

int main(){
	Manzanas mzas_arbol1(3);
	Manzanas mzas_arbol2(2);
	Manzanas Total = mzas_arbol1 + mzas_arbol2;
	cout<< Total;

}