#include <stdio.h>
#include <stdlib.h>


typedef struct nodo{
	struct nodo *siguiente;
	int numero;
}nodo;

nodo* cabeza = NULL;
nodo* ultimo = NULL;

void agregarimpresion(nodo* nuevoNodo){
	nuevoNodo -> siguiente = NULL;
	if(cabeza==NULL){
		cabeza = nuevoNodo;
	
		
	}else{
		nodo* actual = cabeza;
		while(actual ->siguiente !=NULL){
			actual =  actual ->siguiente;
		}
		actual -> siguiente = nuevoNodo;
		nuevoNodo->siguiente =NULL;
		
	}
}

nodo* imprimir(){
	if(cabeza ==NULL){
		return NULL;
	}
	nodo* retorno = cabeza;
	cabeza = cabeza ->siguiente;
	return retorno;
}

nodo* documentoaimprimir(){
	if(cabeza == NULL){
		return NULL;
	}
	return cabeza;
}
int main() {
	int entrada;
	int numGuardar;
		
		
		do{
			printf("1. Ingrese la clave de impresion del documento a imprimir \n");
			printf("2. Imprimir \n");
			printf("3. Revisar el primer documento en cola listo para imprimir\n");
			printf("4. Salir\n");
			scanf("%i",&entrada);
			printf("-----------------------------------------\n");
		
		if(entrada ==1){
			nodo* nuevoIngreso = malloc(sizeof(nodo));
			printf("Escriba la clave del documento que se pondra en cola \n");
			scanf("%d",&numGuardar);
			
			nuevoIngreso->numero=numGuardar;
			agregarimpresion(nuevoIngreso);	
			printf("-----------DOCUMENTO EN COLA PARA IMPRIMIR------------------------------\n");
			
		}else if(entrada ==2){
			int bandera =0;
			nodo* borrado = imprimir();
			//while(borrado != NULL && bandera <1){
			bandera =  bandera + 1;
			printf("%i\n", borrado -> numero);
			for(int i=1;i<5;i++){
				printf("Imprimiendo el documento espere por favor...\n");
			}
			printf("\n");
			printf("-----------EL DOCUMENTO FUE IMPRESO CON EXITO ------------------------------\n");
			
			
			//}		
		}else if(entrada == 3){
			nodo* documentolisto = documentoaimprimir();
			//while(peekPrimero != NULL){
			printf("%i\n", documentolisto -> numero);
			//peekPrimero = peek();
			printf("-----------MOSTRADO EL PRIMER DOCUMENTO EN COLA LISTO PARA LA IMPRESION------------------------------\n");
			
			//}
		}else if(entrada ==4){
			exit(0);
		}
		}while(entrada!=0);

	return 0;
}
