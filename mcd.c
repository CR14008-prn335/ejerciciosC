#include <stdio.h>
//Encontrar el maximo comun divisor de dos numeros ingresados por el usuario
//usando recursividad
int mcd(int n1, int n2);
int main()
{
  int a=0,b=0;
  printf("Ingrese el primer numero: \n ");
  scanf("%d", &a);
  printf("Ingrese el segundo numero: \n ");
  scanf("%d", &b);
	
  if(a<=0 || b<=0 ){
    printf("los numeros que ingreso no son validos: ERROR!!!");
  }else{
    printf("El MCD de %d y %d es: %d \n",a,b,mcd(a, b));
   return 0;
       }
            }

   int mcd(int n1 ,int n2){
	
    if(n2==0)
       return n1;
    else
      return mcd(n2, n1%n2);

                          }
