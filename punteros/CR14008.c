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
//	printf("valor pusheado %d \n",valor);
}

int pop(struct Stack* pila){
	return pila->arreglo[pila->top--];
}

int peek(struct Stack* pila){
	return pila->arreglo[pila->top];
}

int main() {
	struct Stack* pila=createStack(10);
	push(pila,'X');
	push(pila,'Y');
	pop(pila,'Z');
	pop(pila,'T');
	pop(pila,'U');
	push(pila,'V');
	pop(pila,'W');
	pop(pila,'P');
	push(pila,'R')
	
	
	
	
	return 0;
}



/*
EN PRIMER LUGAR EL PROBLEMA QUE SE PRESENTA EN LA GUIA NO COMPILARIA PORQUE EN EL METODO ELMINAR PIDE DOS PARAMETROS
//EL PRIMERO QUE ES LA PILA DE DONDE SE ELIMINARA EL DATO Y DESPUES PIDE OTRO PARAMETRO
//EL CUAL NO TENDRIA QUE IR ALLI POR ESO DESDE EL LITERAL C OCURRE ESE ERROR POR ESO NO COMPILARIA POR QUE SE LE MANDA MAS PARAMETROS DE LOS QUE NECESITA 
//EL METODO POP DE LA PILA SI OMITIMOS ESTE ERROR QUEDARIA LO SIGUIENTE:
//LA PILA QUEDA CON CERO ELEMENTOS AL FINAL DE LA EJECUCION
//LOS ERRORES QUE OCURREN SON QUE CUANDO LLEGA AL LITERAL E OCURRE UN SUBDESBORDAMIENTO
PORQUE INTENTA BORRAR UN ELEMENTO DE LA PILA CUANDO ESTA VACIA POR ESO OCURRE ESTE ERROR
*/
