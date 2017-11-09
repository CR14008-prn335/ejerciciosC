/*el siguiente programa realiza insercion es decir recorre un vector previamente lleno con valores y lo ordena de menor a mayor*/
#include <stdio.h>
int main (){
int i,tam,tem=0,j,dato;
/*dimensionando el vector*/
printf("Ingrese el tamaño que tendra el vector\n");
scanf("%d", &tam);
int vector[tam];//declarando el vector con el nuevo tamaño ingresado por el usuario
/*llenado del vector por el usuario*/
for(i=0;i<tam;i++){
printf("Ingrese los valores para el vector\n");
scanf("%d", &dato);
vector[i]=dato;
}
/*fin*/
/*mostrar el vector original*/
printf("\n");
printf("vector original\n");
for(i=0;i<tam;i++){
printf("%d\t", vector[i]);
	
}
printf("\n");
/*metodo de insercion*/
for(i=1;i<tam;i++){
	tem=vector[i];
	j=i-1;
	while((vector[j]>tem) && (j>=0)){
		vector[j+1]=vector[j];
	
	j--;
	vector[j+1]=tem;
}
}
printf("\n");
printf("vector con insercion\n");
for(i=0;i<tam;i++){
printf("%d\t", vector[i]);
	
}
printf("\n");
/*fin*/
return 0;
}