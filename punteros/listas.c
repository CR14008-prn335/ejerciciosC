#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int dato;
	struct nodo *siguiente;
	
	
}nodo;

nodo *primero=NULL;
nodo *ultimo= NULL;

void agregar(nodo *nodoA){
	nodoA-> siguiente=NULL;
	if(primero==NULL){
		primero=nodoA;
		ultimo=nodoA;
	}else{
		ultimo->siguiente=NULL;
		ultimo=nodoA;
	}
	
}


int main() {
	nodo *primero=malloc(sizeof(nodo));
	primero->dato=1;
	nodo *ultimo=malloc(sizeof(nodo));
	ultimo->dato=7;
	
	agregar(primero);
	agregar(ultimo);
	
	
	nodo *i=primero;
	while(i != NULL){
		printf("%i\n",i->dato);
		i=i->siguiente;
			
	};
	return 0;
}

