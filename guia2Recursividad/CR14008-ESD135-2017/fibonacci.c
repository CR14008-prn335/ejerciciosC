#include <stdio.h>
int fibonacci (int n);
int main(){
int a,i;
printf("Ingrese el numero n de elementos que desea imprimir\n");
scanf("%d", &a);

for(i=1;i<=a;i++){
	printf("resultado #%d: %d  \n",i,fibonacci(i) );
}

	return 0;
}


int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}