/*Ejercicio de crear una matriz con valores y hacer que las filas de dicha matriz se conviertan
en columnas y viceversa */
#include <stdio.h>
int main(){
	int fila,columna,filas,columnas,dato;
	/*pidiedo el numero de filas y columnas que contendra la matriz*/
	printf("Ingrese el numero de filas que utilizara en la matriz\n");
	scanf("%d", &filas);
	printf("Ingrese el numero de columnas que utilizara en la matriz\n");
	scanf("%d", &columnas);
	/*fin*/
	int matriz[filas][columnas];//declarando la matriz con los datos anteriormente pedidos

	/*pidiendo datos desde el teclado para llenar la matriz con valores enteros*/
	for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
        printf("Ingrese el valor en la matriz en la posicion %d,%d \n",fila+1,columna+1);
        scanf("%d", &dato);
        matriz[fila][columna]=dato;
		}
	}
	/*fin de pedir los datos*/
	/*imprimiendo la matriz*/
	printf("\n");
	printf("Matriz normal\n\n");
	for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
			printf("%d\t", matriz[fila][columna]);
       }
       printf("\n");
   }
   /*fin*/
   /*imprimiendo la matriz transpuesta*/
   printf("\n");
   printf("Matriz transpuesta\n\n");
   for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
			printf("%d \t", matriz[columna][fila]);
       }
       printf("\n");
   }
   /*fin*/

	return 0;
}