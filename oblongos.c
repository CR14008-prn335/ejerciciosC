#include <stdio.h>
//mostrar el numero n de la serie de numeros oblongos usando recursividad
long oblongos(long n);
int main() {
	int numero,resultado;
	printf("Ingrese el numero que desea ver de la serie de numeros oblongos \n");
	scanf("%d", &numero);
	
	if(numero<=0){
		printf("NO se puede mostrar ese numero de la serie ERROR!!! \n");
		return 1;
	}else{
		resultado=oblongos(numero);
		printf("el numero oblongo en la posicion n=%d es: %d \n",numero,resultado);
		
	}
		
	return 0;
}

long oblongos(long n){
	if(n==0){
		return 1;
	}else{
		//oblongos(n-1);
		return(n*(n+1));
	}
}
