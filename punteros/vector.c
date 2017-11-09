#include <stdio.h>
#define max 12
int vector[max];

int main() {
 int i,numero,*a,*b,aux,j;
 float suma=0.0,promedio=0.0;
 for(i=0;i<max;i++){
	 do{
	printf("ingrese un numero entero en la posicion de vector #:%d\n",i+1);
	scanf("%d", &numero);
	 }while(numero<=0);
	 vector[i]=numero;
 }
 
 printf("\n");
 printf("mostrando el vector original\n");
 for(i=0;i<max;i++){
	 
	 printf("%d\t",vector[i]);
 }
 
 printf("\n");
 for(i=0;i<max;i++){
	 for(j=0;j<max;j++){
		 if(vector[j]<=vector[j+1]){
			 a=&vector[j];
			 b=&vector[j+1];
			 aux=*a;
			 *a=*b;
			 *b=aux;
		 }
	 }
 }
 
 printf("\n");
 printf("mostrando el vector ordenado de mayor a menor\n");
 for(i=0;i<max;i++){
	 
	 printf("%d\t",vector[i]);
 }
 printf("\n");
 
 for(i=0;i<max;i++){
	 suma=suma+vector[i];
 }
 promedio=suma/max;
 printf("el primer # es: %d\nel segundo # es: %d\nel promedio del vector es: %.2f\n",vector[0],vector[11],promedio);
 
 
	return 0;
}

