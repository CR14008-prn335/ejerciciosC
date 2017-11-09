#include <stdlib.h>
#include <stdio.h>

//Definimos el Struct
typedef struct _nodo {
	int valor;
	struct _nodo *siguiente;
	struct _nodo *primero;
	struct nodo *ultimo;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;


void Push(Pila *l, int v);
int Pop(Pila *l);
void mostrar_pila(Pila *pila);
int main() {
	Pila pila = NULL;
	int Menu,valor,valorprimero;
	printf("Demostracion de una Pila. \n 1.Push \n 2.Pop \n 3.Revisar Primer Elemento \n 4.Salir \n");
	scanf("%d",&Menu);
	
	//while para salida del Menu
	while(Menu!=4)
	{
		
		//Opcion 1 (Push)
		if(Menu==1)
		{
			printf("Ingrese un valor:\n");
			scanf("%d",&valor);
			Push(&pila, valor);
			
		}
		else if(Menu==2)
		{
			printf("%d \n ", Pop(&pila));
			
			
		}
		else if(Menu==3)
		{
			valorprimero=Pop(&pila);
			printf("Primero en la Pila:\n %d",valorprimero,"\n");
			Push(&pila, valorprimero);
			
		}
		
		
		
		
		
		
		
		mostrar_pila(&pila);
		printf("Demostracion de una Pila. \n 1.Push \n 2.Pop \n 3.Revisar Primer Elemento \n 4.Salir \n");
		scanf("%d",&Menu);
	}
	
	
	
	
	
	
	
	printf("%d", Pop(&pila));
	
	
	
	getchar();
	return 0;
}

void mostrar_pila(Pila *pila)
{
	pNodo aux;
	
	aux=*pila;
	
	printf("Pila \n");
	int valor;
	while(aux!=NULL )
	{
		
		valor=aux->valor;
		
		printf("%d",valor);
		
		aux = aux->siguiente;
		
		printf("\n");
	}
}




void Push(Pila *pila, int v) {
	pNodo nuevo;
	
	// Crear un nodo nuevo
	nuevo = (pNodo)malloc(sizeof(tipoNodo));
	nuevo->valor = v;
	
	
	nuevo->siguiente = *pila;
	
	// Ahora, el comienzo de nuestra pila es en nuevo nodo
	*pila = nuevo;
	
}

int Pop(Pila *pila) {
	pNodo nodo;
	int v;
	
	// Nodo apunta al primer elemento de la pila
	nodo = *pila;
	if(!nodo) return -1;
	//si no tenemos nodos en nuestra pila devolveremos el valor -1
	*pila = nodo->siguiente;
	nodo->siguiente=nodo->primero;
	//guardamos en memoria el valor de la variable
	v = nodo->valor;
	
	
	//liberamos el nodo
	free(nodo);
	return v;
}
