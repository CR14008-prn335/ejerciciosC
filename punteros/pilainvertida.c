#include <stdio.h>
#include <stdlib.h>
#define bool int 
struct sNodo {
	char dato;
	struct sNodo *siguiente;
	
	
};
//los dos asteriscos representan un apuntador de un apuntador y se hace para 
void push (struct sNodo** top_ref, int nuevoDato);
int pop(struct sNodo** top_ref);
bool vacio(struct sNodo* top);
void imprimir(struct sNodo* top);


//usando recursividad
void  insertar(struct sNodo** top_ref, int valor){
	if(vacio(*top_ref)){
		push(top_ref, valor);
	}else{
		int temp=pop(top_ref);
		insertar(top_ref, valor);
		push(top_ref, temp);
		
	}
	
	
}


void revertir(struct sNodo** top_ref){
	if(!vacio(*top_ref)){
		int temp=pop(top_ref);
		revertir(top_ref);
		insertar(top_ref, temp);
	}
	
}


int main() {
struct sNodo *s=NULL;
push(&s, 35);
push(&s, 20);
push(&s, 17);
push(&s, 1);

printf("\n pila original");
imprimir(s);
revertir(&s);

printf("\n pila invertida");
imprimir(s);


	return 0;
}

bool vacio(struct sNodo* top){
	return(top==NULL)? 1:0;
	
	
}


void push(struct sNodo** top_ref, int nuevoDato){
	
	struct sNodo* nuevoNodo=(struct sNodo*) malloc(sizeof(struct sNodo));
	
	if(nuevoNodo==NULL){
		printf("stack overflow\n");
		exit(0);
	}
	nuevoNodo->dato=nuevoDato;
	//lista enlazada...muy pronto...
	nuevoNodo->siguiente=(*top_ref);
	(*top_ref)=nuevoNodo;
	
	
	
}


int pop(struct sNodo** top_ref){
	char res;
	struct sNodo *top;
	
	if(*top_ref== NULL ){
		printf("stack overflow \n");
		exit(0);
	}else{
		top=*top_ref;
		res=top->dato;
		*top_ref=top->siguiente;
		//alv dentro de stdlib
		free(top);
		return res;
		
	}
}


void imprimir (struct sNodo* top){
	
	printf("\n");
	while(top!=NULL){
		printf(" %d ",top->dato);
		top=top->siguiente;
	}
}
