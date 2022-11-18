/*
	UFA - ESPE
	ALUMNOS: Molina Gustavo, Mateo Barriga
	FECHA CREACION: 11/11/22
	FECHA DE MODIFICACION: 11/11/22
	ENUNCIADO DEL PROBLEMA: SEPARAR EN CLASES Y MEJORAR EL CODIGO DE LA SUMA DE MATRICES USANDO RECURSIVIDAD VISTO EN CLASES
	NIVEL NRC: ESTRUCTURA DE DATOS 8000
*/
#include "Matrices.cpp"
#define MAX 3

int main(int argc, char** argv) {

	Matrices matriz; //objeto de la clase matrices
		
	srand (time(NULL)); //funcion de inicializacion para el metodo random
	
	matriz.encerarMatriz();
	
	matriz.llenarMatriz();
	
	matriz.imprimirMatriz(matriz.getMat1(),"1");
	
	cout<<"\n";
	
	matriz.imprimirMatriz(matriz.getMat2(),"2");
	
	cout<<"\n";
	
	matriz.sumaRecursivaMatrices( matriz.getMat1(),matriz.getMat2(),matriz.getMatR(), 2, 2);
	matriz.imprimirMatriz(matriz.getMatR(),"R");
	cout<<"\nPulse enter para continuar\n"<<endl;
	getch();
	return 0;
}
