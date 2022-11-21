/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
NOMBRE: Mateo Barriga, Gustavo Molina
NRC: 8000
Fecha entrega: 07/11/2022
Fecha de modificacion:
Materia: Estructura de datos
Programa: Sobrecarga de Operadores (=&)
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int op;
int sw=1;
int enter;
int datoBus;
int swDB=0;

struct nodo{
	int dato;
	nodo *siguiente;
	nodo *anterior;
};

nodo *primero=NULL;
nodo *ultimo=NULL;

void ingresar_datos();
void mostrar();
void buscar();
void eliminar();

int main(){
	do{
		cout<<"1. Ingresar dato"<<endl;
		cout<<"2. Mostar lista"<<endl;
		cout<<"3. Buscar dato"<<endl;
		cout<<"4. Eliminar dato"<<endl;
		cout<<"0. salir"<<endl;
		cin>>op;
		
			switch(op){
			case 1:
				ingresar_datos();
				break;
			case 2:
				mostrar();
				cout<<"\nPulse 1 para continuar...";
				cin>>enter;
				break;
			case 3:
				buscar();	
				cout<<"\nPulse 1 para continuar...";
				cin>>enter;
				swDB=0;
				break;
			case 4:
				eliminar();
				cout<<"\nPulse 1 para continuar...";
				cin>>enter;
				swDB=0;
				break;
			case 0:
				sw=0;
				break;
			default:
				cout<<"Opcion no valida..";
				cout<<"\nPulse 1 para continuar...";
				cin>>enter;
		}
	}while(sw!=0);
	return 0;
}

void ingresar_datos(){
	nodo *nuevo_nodo = new nodo();
	cout<<"Digite el dato que sea guardar: ";
	cin>>nuevo_nodo->dato;
	
	if(primero==NULL){
		primero=nuevo_nodo;
		primero->siguiente=primero;
		primero->anterior=primero;
		ultimo=primero;
	}else{
		ultimo->siguiente=nuevo_nodo;
		nuevo_nodo->siguiente=primero;
		nuevo_nodo->anterior=ultimo;
		ultimo=nuevo_nodo;
	}
}

void mostrar(){
	nodo *aux=new nodo();
	aux = primero;
	if(primero!=NULL){
		do{
			cout<<"["<<aux->dato<<"]";
			aux=aux->siguiente;
		}while(aux!=primero);
	}else{
		cout<<"La lista esta vacia!! \n";
	}
}

void buscar(){
	nodo *buscar=new nodo();
	buscar = primero;
	cout<<"Digite el dato buscado: ";
	cin>>datoBus;
	
	if(primero!=NULL){
		do{
			if(buscar->dato==datoBus){
				cout<<"Dato encontrado! \n";
				swDB=1;
			}
			buscar=buscar->siguiente;
		}while(buscar!=primero && swDB==0);
		if(swDB==0){
			cout<<"No se encontro el dato \n";
		}
	}else{ 
		cout<<"La lista esta vacia!! \n";
	}
}

void eliminar(){
	nodo *buscar = new nodo();
	nodo *nodo_eliminar = new nodo();
	buscar = primero;
	nodo_eliminar=NULL;
	
	cout<<"Digite el dato a eliminar: ";
	cin>>datoBus;
	
	
	if(primero!=NULL){
		do{
			if(buscar->dato==datoBus){
				cout<<"Dato encontrado! \n";
				if(buscar==primero){
					primero = primero->siguiente;
					primero->anterior=ultimo;
					ultimo->siguiente=primero;
				}else if(buscar==ultimo){
					ultimo = ultimo->anterior;
					primero->anterior = ultimo;
					ultimo->siguiente = primero;
				}else{
					nodo_eliminar->siguiente=buscar->siguiente;
					buscar->siguiente->anterior=nodo_eliminar;
				}
				swDB=1;
			}
			nodo_eliminar=buscar;
			buscar=buscar->siguiente;
		} while(buscar!=primero && swDB==0);
		
		if(swDB==0){
			cout<<"El dato buscado no se encontro \n";
		}else{
			free(nodo_eliminar);
		}
	}else{
		cout<<" La Lista Esta VACIA!! \n";
	}	
}
