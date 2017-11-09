#include <stdio.h>
#include <stdlib.h>
#define max 50


int queue[max];
int final = -1;
int frente = -1;
void insertar();
void eliminar();
void mostrar();
	

int main() {
	//ejemplo de colas
int opcion;

while(1){
	printf(" \n1.Insertar elemento \n");
	printf("2.Eliminar elemento \n");
	printf("3.Mostrar elemento \n");
	printf("4.Salir\n");
	scanf("%d",&opcion);
	
	
	switch(opcion){
	case 1:
		insertar();
		break;
	case 2:
		eliminar();
		break;
	case 3:
		mostrar();
		break;
	case 4:
		exit(0);
		
	default:
			printf("Error");
	}
	
}
	
	
	
	return 0;
}




 void insertar(){
	int elemento;
	if(final =max-1){
		printf("desbordamiento");
		
	}	else{
		if(frente==-1){
			frente=0;
			printf("inserte un elemento");
			scanf("%d",&elemento);
			final=final+1;
			queue[final]=elemento;
			
		}
 
		
		
	}
}



void eliminar(){
	
	if(frente==-1 || frente>final){
		printf("subdesbordamieno");
		return;
		
	}else{
		printf("eliminado %d\n");
		frente=frente+1;
		
		
	}
	
}

void mostrar(){
	
	int i;
	if(frente==-1){
		printf("cola vacia");
	}else {
		for(i=frente;i<=final;i++){
			printf("%d",queue[i]);
			printf("\n ");
			
		}
		
	}
	
}
