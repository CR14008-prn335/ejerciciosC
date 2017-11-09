#include <stdio.h>
int main (){
/* declarando variables a utilizar y pidiendo las dimensiones de la matriz al usuario*/
int F,C,i,j,c,f,valor_mayor=0,dato;
printf("Ingrese la cantidad de filas que tendra la matriz \n");
scanf("%d", &f);
printf("Ingrese la cantidad de columnas que tendra la matriz \n");
scanf("%d", &c);
int matriz[f][c];//declarando la matriz con los datos recibidos del usuario
/*llenando la matriz con datos */
for(i=0;i<f;i++){
	for(j=0;j<c;j++){
     printf("Ingrese el valor de la matriz en la posicion %d , %d \n",i+1,j+1 );
     scanf("%d",&dato);
     matriz[i][j]=dato;
	}
}
/* fin del llenado*/
/*recorriendo la matriz la matriz en busca del dato mayor y guardadndo en F(fila) y C(columna) donde(posicion) se encuentra dicho dato */
for(i=0;i<f;i++){
	for(j=0;j<c;j++){
		if(matriz[i][j]>valor_mayor){
         valor_mayor=matriz[i][j];
         F=i;
         C=j;
		}
	}
}
/*Fin de la busqueda del dato mayor en la matriz*/
printf("El valor mayor en la matriz es: %d en la fila: %d columna: %d \n",valor_mayor,F,C);
return 0;
}
