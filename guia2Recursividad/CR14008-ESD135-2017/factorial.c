#include <stdio.h>

long factorial(int);

int main(){

	int n;
	long f;
	printf("Ingrese un numero al cual se le calculara el factorial \n");
	scanf("%d", &n);

	if(n<0){
		printf("el numero que ingreso no es valido");
	}else {
		f=factorial(n);
		printf("%d! =  %ld \n",n,f);
	}
	return 0;
     }

	long factorial(int n){
		if(n==0){
			return 1;
		}else {
			return (n*factorial(n-1));
		}
	}

