/***********************************************************************
 * Module:  Cproceso.cpp
 * Author:  steve
 * Modified: jueves, 27 de octubre de 2022 21:24:47
 * Purpose: Implementation of the class Cproceso
 ***********************************************************************/

#include "Cproceso.h"

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
	this->num=nume;
	this->den=deno;
}

Cproceso::~Cproceso()
{
	int *obj= new int;
	*obj = 0;
	delete[]obj;
}