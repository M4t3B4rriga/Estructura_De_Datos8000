/***********************************************************************
 * Module:  Interface.cpp
 * Author:  steve
 * Modified: jueves, 27 de octubre de 2022 21:20:58
 * Purpose: Implementation of the class Interface
 ***********************************************************************/

#include "Interface.h"

Cproceso Interface::racional(Cproceso obj1, Cproceso obj2)
{
	int a,b,c,d;
	a=obj1.getNum();
	b=obj1.getDen();
	c=obj2.getNum();
	d=obj2.getDen();
	this->setNum((a*d)+(b*c));
	this->setDen(b*d);
	return *this;
}


void Interface::imprimirObj(Cproceso obj)
{
	cout<<Obj.getNum()<<"/"<<Obj.getDen()<<endl;
}