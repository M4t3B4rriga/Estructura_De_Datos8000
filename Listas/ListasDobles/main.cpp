/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
NOMBRE: Mateo Barriga, Gustavo Molina
NRC: 8000
Fecha entrega: 07/11/2022
Fecha de modificacion:
Materia: Estructura de datos
Programa: Sobrecarga de Operadores (=&)
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ListasDobles.h"

int main(int argc, char** argv) {
	ListasDobles* lista = new ListasDobles();
	ListasDobles* p = new ListasDobles();
	char op;
	int val;

	int opcionMenu = 0;
	do {
		system("cls");
		printf("\n|-----------------------------|");
		printf("\n|      ° LISTAS DOBLES °      |");
		printf("\n|------------------	|---------------|");
		printf("\n| 1. Ingresar      	| 4. Borrar   	|");
		printf("\n| 2. Lista Ascendente   | 5. Salir    	|");
		printf("\n| 3. Lista Descendente 	|        	|");
		printf("\n|------------------	|---------------|");
		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch (opcionMenu) {
		case 1:
			printf("\n\n INSERTA NODO EN LA LISTA \n\n");
			printf("\n Ingrese el elemento a la lista : ");
			scanf("%d", &val);
			lista->Insertar(lista, val);

			break;
		case 2:
			printf("\n\n MOSTRAR LA LISTA ASCENDENTEMENTE \n\n");
			lista->MostrarLista(lista, ASCENDENTE);
			system("pause>nul");
			break;
		case 3:
			printf("\n\n MOSTRAR LA LISTA DESCENDENTEMENTE\n\n");
			lista->MostrarLista(lista, DESCENDENTE);
			system("pause>nul");
			break;

		case 4:
			printf("\n\n BORRAR UN NODO EN LA LISTA \n\n");
			printf("\n Ingrese el elemento a Borrar : ");
			scanf("%d", &val);
			lista->Borrar(lista, val);
			break;

		case 5:
			printf("\n\n Programa finalizado...");
			break;
		default:
			printf("\n\n Opcion No Valida \n\n");
		}
	} while (opcionMenu != 5);
	return 0;


}
