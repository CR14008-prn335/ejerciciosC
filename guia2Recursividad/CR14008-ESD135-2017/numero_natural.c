#include <stdio.h>
int numero_naturales(int n);
int main(){
int a ;

printf("Ingrese un numero \n");
scanf("%d", &a);

if(a<=0){
	printf("El numero no es natural\n");

}else{
	for (int i = 1; i <=a; i++)
	{
	
		printf("El numero es: %d\n",numero_naturales(i));
		
	
	}
}


	return 0;
}


int numero_naturales(int n){
if(n==1){
		return n;
	}else{
		n=n-1;
		return(numero_naturales(n)+1);
	}
}
