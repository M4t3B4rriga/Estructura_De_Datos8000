/*
	UFA - ESPE
	ALUMNOS: Molina Gustavo, Mateo Barriga
	FECHA CREACION: 11/11/22
	FECHA DE MODIFICACION: 11/11/22
	ENUNCIADO DEL PROBLEMA: SEPARAR EN CLASES Y MEJORAR EL CODIGO DE LA SUMA DE MATRICES USANDO RECURSIVIDAD VISTO EN CLASES
	NIVEL NRC: ESTRUCTURA DE DATOS 8000
*/
#include "Matrices.h"

Matrices::Matrices(){
	mat1=(int **)malloc (3*sizeof(int*));
	mat2=(int **)malloc (3*sizeof(int*));
	matR=(int **)malloc (3*sizeof(int*));
}

int** Matrices::getMat1(){
	return mat1;
}

int** Matrices::getMat2(){
	return mat2;
}

int** Matrices::getMatR(){
	return matR;
}

void Matrices::setMat1(int** otroMat1){
	mat1=otroMat1;
}

void Matrices::setMat2(int** otroMat2){
	mat2=otroMat2;
}

void Matrices::setMatR(int** otroMatR){
	matR=otroMatR;
}

void Matrices::sumaRecursivaMatrices(int **mat1, int **mat2, int **matR, int f, int c){
		if ((f>=0) && (c>=0)){
		*(*(matR+f)+c)=*(*(mat1+f)+c) + *(*(mat2 +f)+c);
		sumaRecursivaMatrices( mat1,mat2,matR,f-1,c);
		sumaRecursivaMatrices( mat1,mat2,matR,f,c-1);
	}
}

void Matrices::encerarMatriz(){
		for(int j=0;j<3;j++){
		*(mat1+j)=(int*)malloc(3*sizeof(int*));
		*(mat2+j)=(int*)malloc(3*sizeof(int*));
		*(matR+j)=(int*)malloc(3*sizeof(int*));
	} 
}

void Matrices::llenarMatriz(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			*(*(mat1+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(mat2+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(matR+i)+j)=0;
		}
	}
}

void Matrices::imprimirMatriz(int **matAux,char *charMat){
	cout<<"\n La matriz " <<*charMat<< " es :\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",*(*(matAux+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}






