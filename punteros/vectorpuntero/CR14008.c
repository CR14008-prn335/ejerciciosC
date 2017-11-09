#include <stdio.h>

int main() {
	int numero,i,j,vector[10000],contador=0,k,bandera=0;
	//solicitando el numero de filas y columnas de las dos matrices cuadradas
	printf("ingrese el numero de filas y columnas que tendran las dos matrices \n");
	scanf("%d", &numero);
	if(numero<=0){
		printf("el numero de filas y columnas de la matriz que ingreso no es valido");
	}else{
	int matriz1[numero][numero];
	int matriz2[numero][numero];
	int resultado[numero][numero];
	
	//pidiendo datos para llenar las dos matrices de forma individual
	printf("\n");
	printf("llenado de la matriz 1 \n");
	
	for(i=0;i<numero;i++){
		for(j=0;j<numero;j++){
			printf("ingrese el valor de la matriz 1 en la posicion %d,%d \n",i+1,j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("\n");
	printf("llenado de la matriz 2 \n");
	
	for(i=0;i<numero;i++){
		for(j=0;j<numero;j++){
			printf("ingrese el valor de la matriz 2 en la posicion %d,%d \n",i+1,j+1);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	
	//sumando las dos matrices y guardando en una tercera matriz llamada resultado
	
	for(i=0;i<numero;i++){
		for(j=0;j<numero;j++){
			resultado[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	
	
	printf("\n");
	printf("Mostrando la matriz resultado\n");
	for(i=0;i<numero;i++){
		for(j=0;j<numero;j++){
			printf("%d \t",resultado[i][j]);
		}
		printf("\n");
	}
	
	
	//verificando cuantos numeros son primos en la matriz y llenando un vector con dichos datos
        printf("\n");
	for (i = 0;i<numero; i++)
	{
		for (j=0;j<numero;j++)
		{
			 contador=0;
			for (k=1;k<=resultado[i][j];k++)
			{
				if (resultado[i][j] % k == 0){
					contador=contador+1;
				}
			}
			if (contador==2){
			vector[bandera]=resultado[i][j];
			bandera=bandera+1;
			}
		}
	}
	
	
	
	//mostrando el vector de los numeros primos encontrados en la matriz resultado
	printf("\n");
	printf("Mostrando el vector con los numeros primos encontrados en la matriz resultado\n\n");
	if(bandera==0){
		printf("No se encontro ningun numero primo en la matriz resultado\n");
	}else{
	for(i=0;i<bandera;i++){
		printf("%d \t",vector[i]);
	}
	
	}
	return 0;
	}
}

