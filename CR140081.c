#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack {
	int top;
	unsigned capacidad;
	int* arreglo;
};

struct Stack* createStack(unsigned capacidad){
	struct Stack* pila=(struct Stack*) malloc
		(sizeof(struct Stack));
	pila->capacidad=capacidad;
	pila->top=-1;
	pila->arreglo=(int*) malloc(pila->capacidad * sizeof(int));
	return pila;
}


void push(struct Stack* pila, int valor){
	pila->arreglo[++pila->top]=valor;
	printf("Elemento agregado con exito\n");

}

int pop(struct Stack* pila){
	return pila->arreglo[pila->top--];
}

int peek(struct Stack* pila){
	return pila->arreglo[pila->top];
}

int main() {
	int i,j,numero;
	printf("Ingrese la cantidad de datos que tendra la pila\n");
	scanf("%d",&numero);
	struct Stack* pila=createStack(numero);
	int vector[numero];
	for(i=0;i<numero;i++){
		printf("Ingrese un elemento en la pila \n");
		scanf("%d",&j);
		vector[i]=j;
		push(pila,j);
	}
	printf("\n");
	printf(" mostrando Pila invertida\n");
for(j=0;j<numero;j++){
		printf("%d\n",vector[j]);
	}

printf("\n");
printf("eliminado elementos repetidos los que estan de forma consecutiva en la pila");
for(j=0;j<numero;j++){
	if(vector[j]==vector[j+1]){
	pop(pila);	
	}else{

	}
}
	
	return 0;
}

