/*
	UFA - ESPE
	ALUMNOS: Molina Gustavo, Mateo Barriga
	FECHA CREACION: 11/11/22
	FECHA DE MODIFICACION: 11/11/22
	ENUNCIADO DEL PROBLEMA: SEPARAR EN CLASES Y MEJORAR EL CODIGO DE LA SUMA DE MATRICES USANDO RECURSIVIDAD VISTO EN CLASES
	NIVEL NRC: ESTRUCTURA DE DATOS 8000
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/**
     * @brief Metodo recursivo sumaRecursivaMatrices, encerar, llenar e imprimir las matrices operantes y resultante
*/
class Matrices{
	public:
		/**
    	* @brief Metodo que realiza la suma de matrices usando recursividad
     	* @param  int** mat1, int** mat2,int** matR, int f, int c
     	* @return void
    	*/
		void sumaRecursivaMatrices( int **, int **, int **, int, int);
		/**
    	* @brief Metodo que encera la matriz bidimensional
     	* @param  void
     	* @return void
    	*/
		void encerarMatriz();
		/**
    	* @brief Metodo que llena la matriz con numeros aleatorios
     	* @param  void
     	* @return void
    	*/
		void llenarMatriz();
		/**
    	* @brief Metodo que imprime la matriz con los datos
     	* @param  int** mat, char** dato_referencial_de_la_matriz
     	* @return void
    	*/
		void imprimirMatriz(int**,char*);
		/**
    	* @brief Constructor que inicializa las matrices con malloc
     	* @param  void
    	*/
		Matrices();
		
		//getters y setters de los atributos de la clase
		int** getMat1();
		int** getMat2();
		int** getMatR();
		void setMat1(int** );
		void setMat2(int** );
		void setMatR(int** );
		
	private:
		//atributos de la clase	
		int ** mat1;
		int ** mat2;
		int ** matR;
};