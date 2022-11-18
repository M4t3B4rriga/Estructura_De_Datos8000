#pragma once

class Operador {
public:
	Operador();
	Operador(int, int);
	int operator &=(int);
protected:
private:

	int num1;
	int num2;
	int num3;
};
