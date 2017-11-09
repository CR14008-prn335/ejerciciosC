#include <stdio.h>
#define max 4
int pila[max];
int top;
void apilar();
void desapilar();
void visualizar();
int main() {
	int opcion;
	top = -1;
	do{
		opcion=0;
		printf("\n   ***Menu***\n");
		printf("******************\n");
		printf("* 1.apilar       *\n");
		printf("* 2.desapilar    *\n");
		printf("* 3.visualizar   *\n");
		printf("* 4.salir        *\n");
		printf("******************");
		printf("\nelija una accion:\n");
		scanf("%d",&opcion);
		
		switch (opcion){
		case 1:{ apilar();
		break;}
		case 2:{ desapilar();
		break;}
		case 3:{ visualizar();
		break;}
		case 4:{  return 0;
		}
		}
		
	}while(opcion!=4);
	
	
	
}
void apilar (){
	//system("cls");
	int num,i;
	if(top==(max-1)){
		printf("pila llena\n");
		
	}
	else{
		for(i=0;i<max;i++){
			
			printf("introduzca un elemento\n");
			scanf("%d",&num);
			top=top+1;
			pila[i]=num;
			
		}
	}
	
}


void desapilar(){
	
	//system("cls");
	
	if(top==-1){
		printf("pila vacia\n");
	}else {
		printf("eliminar elemento\n");
		pila[top];
		top=top-1;
	}
}


void visualizar(){
	int i;
	if(top==-1){
		printf("vacia\n");
		
	}else {
		for(i=top;i>=0;i--){
			printf("\n");
			printf("%d",pila[i]);
		}
		printf("\n");
	}
}



