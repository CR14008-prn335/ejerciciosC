#include <stdio.h>
//imprimir la suma de un numero dado solo tres sumandos ejemplo
//4 imprimir 2+2 3+1 2+1+1 si ingreso 9 3+6 5+4 8+1 y asi para cualquier numero
int main() {
	int numero,contador=1,i,res;
	printf("Ingrese un numero entero mayor a cero\n");
	scanf("%d", &numero);
	if(numero>0 || numero<=3){
		if(numero==1){
			printf("Usted ingreso el numero 1 el cual no tiene sumandos posibles\n");
		}else if(numero==2){
			printf("el numero ingresado fue 2 sus sumandos son:\n 1+1");
		}else if(numero==3){
			printf("el numero ingresado fue 3 sus sumandos son:\n 1+1+1  \n 2+1");
		}
	}
	
	if(numero<=0){
		printf("Error ingreso un numero menor a 1 por favor vuelva a intentarlo");
	}else{
		printf("El numero ingresado fue %d y sus sumandos son: \n",numero);
		
		for(i=1;i<=numero;i++){
			int num=1;
			printf("%d+",num);
		}
		printf("\n");
	for(i=1;i<=numero;i++){
		if(contador<=2 ){
			res=numero-i;
			printf("%d+%d\n",res,i);
			contador=contador+1;
		}
	}	
	}

	
	return 0;
}

