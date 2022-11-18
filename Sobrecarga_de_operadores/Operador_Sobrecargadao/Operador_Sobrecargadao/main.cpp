/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE 
NOMBRE: Mateo Barriga, Gustavo Molina 
NRC: 8000
Fecha entrega: 07/11/2022
Fecha de modificacion:
Materia: Estructura de datos
Programa: Sobrecarga de Operadores (=&)
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>
#include "Operador.h"

using namespace std;

Operador::Operador(int a, int b) {
	this->num1 = a;
	this->num2 = b; 
}

int Operador::operator&=(int newNum) {
	num3 &= newNum;
	cout << num3;
	return num3;
}



int main() {
	int a = 13, b = 30;
	int sumaBinaria;
	sumaBinaria = a&=b;
	cout << sumaBinaria;



	return 0;
}