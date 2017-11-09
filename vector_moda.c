/*programa que perimite buscar en un vector cual es el dato que mas se repite(moda)*/
#include <stdio.h>
int main(){
	int i,j,dato,tamano,maximaVecesQueSeRepite=0,moda=0;
	/*pidiendo al usuario que ingrese el tamaño del vector*/
     printf("Ingrese el tamaño del vector\n");
     scanf("%d", &tamano);
     /*fin*/
     int vector[tamano];//decalarando el vector a usar
     /*llenando el vector con datos solicitados por el teclado*/
      for(i=0;i<tamano;i++){
      printf("Ingrese el dato en la posicion # %d del vector \n",i+1);
      scanf("%d", &dato);
      vector[i]=dato;
      }
     /*fin*/
      /*imprimiendo el vector*/
      printf("\n");
      printf("datos del vector\n");
      for(i=0;i<tamano;i++){
      	printf("%d \t ", vector[i]);
      }
      printf("\n");
      /*calculando la moda de los datos ingresados en el vector*/
     for(i=0;i<tamano;i++){
     int repite = 0;
     for(j=0;j<tamano;j++){
     if(vector[i]==vector[j])
     repite++;
     }
    if(repite>maximaVecesQueSeRepite){
    moda=vector[i];
    maximaVecesQueSeRepite=repite;
     }
     }
     if(maximaVecesQueSeRepite==1){
     	printf("no hay moda ningun numero se repite\n");
     }else{
     printf("La moda es %d y se repitió %d veces.\n",moda,maximaVecesQueSeRepite);

 }
      /*fin*/
	return 0;
}
