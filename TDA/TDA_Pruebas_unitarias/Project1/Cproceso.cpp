#include "Cproceso.h"
#include <iostream>
using namespace std;

int Cproceso::getNum(void)
{
	return num;
}
void Cproceso::setNum(int newNum)
{
	num = newNum;
}
int Cproceso::getDen(void)
{
	return den;
}
void Cproceso::setDen(int newDen)
{
	den = newDen;
}
Cproceso::Cproceso(int nume, int deno)
{
	this->num = nume;
	this->den = deno;
}
Cproceso::~Cproceso()
{
	den--;
}
Cproceso Cproceso::racional(Cproceso obj1, Cproceso obj2)
{
	int a, b, c, d;
	a = obj1.getNum();
	b = obj1.getDen();
	c = obj2.getNum();
	d = obj2.getDen();
	this->setNum((a * b) + (b * c));
	this->setDen(b * d);
	return *this;
}
void Cproceso::imprimirObj(Cproceso obj)
{
	cout << obj.getNum() << "/" << obj.getDen() << endl;
}
