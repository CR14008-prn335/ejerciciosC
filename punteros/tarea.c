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
	printf("valor pusheado %d \n",valor);
}

int pop(struct Stack* pila){
	return pila->arreglo[pila->top--];
}

int peek(struct Stack* pila){
	return pila->arreglo[pila->top];
}

int main() {
	struct Stack* pila=createStack(8);
	
	    push(pila,1);
		push(pila,2);
		pop(pila);
		pop(pila);
		pop(pila);
		push(pila,3);
	    pop(pila);
		pop(pila);
		push(pila, 4);
	
	int  ultimo=0;

	ultimo=peek(pila);
	//&printf("Elemento sacado %d \n",fuera);
	printf("Ultimo elemento %d \n", ultimo);
	
	
	
	return 0;
}


//El numero de elementos que quedo en la pila es  1 que fue el ultimo elemento que que pusheo
//hubo un error de subdesbordamiento porque en el codigo ingreso dos elelentos pero intento eliminar 3 en el tercer elelento que elimino ocurre el subdesbordamiento
//ya que quiero eliminar
