#include <stdio.h>

int main(){
	
	int a,b,*p_a,*p_b,resultado;
	printf("ingrese un valor entero\n");
	scanf("%d",&a);
	printf("ingrese un valor entero\n");
	scanf("%d",&b);
	p_a=&a;
	p_b=&b;
	resultado=*p_a+*p_b;
	printf("el resultado es: %d  \n",resultado);
	return 0;
}
