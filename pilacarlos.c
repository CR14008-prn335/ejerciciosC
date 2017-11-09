#include <stdio.h>
#include <stdlib.h>


typedef struct nodo{
	int dato;
	struct nodo *siguiente;
	
}tiponodo;


typedef tiponodo *pNodo;
typedef tiponodo *Pila;


void insertar(Pila *pila, int num);
int eliminar(Pila *pila);
int main() {
	
	int opcion;
	int num;
	Pila pila=NULL;
	
	do{
		printf("\n");
		printf("\t***Menu***");
		puts("\n1.Ingresar elemento a la pila");
		puts("\n2.eliminar elemento a la pila");
		puts("\n3.mostrar la pila");
		puts("\n4.Salir");
		puts("\n-----------------------------------------\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			printf("Ingrese un numero\n");
			scanf("%d",&num);
			insertar(&pila,num);
			printf("\n Elemento apilado con exito\n");
			break;
		case 2:
			printf("eliminar numero\n");
			num=eliminar(&pila);
			if(num==0){
				printf("\nsubdesbordamineto\n ");
			}else{
				printf("el elemento eliminado fue:%d\n",num);
			}
			break;
			
		case 3:
			
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("error el numero que ingreso no es valido");
			break;
		}
	}while(opcion!=0);
	return 0;
}

void insertar(Pila *pila, int num){
    pNodo nuevo;
	nuevo=(pNodo)malloc(sizeof(tiponodo));
	nuevo->dato=num;
	nuevo->siguiente=*pila;
	*pila=nuevo;
	
	
}

int eliminar(Pila *pila){
	int num;
	pNodo nodo;
	nodo=*pila;
	if(nodo==NULL){
		return 0;
	}else{
		*pila=nodo->siguiente;
		num=nodo->dato;
		free(nodo);
		return num;
	}
	
}


