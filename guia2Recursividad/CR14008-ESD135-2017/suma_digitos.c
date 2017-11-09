
#include <stdio.h>

int suma_digitos(int n);
int  main()
{
    int a;
    printf("Introduzca un numero:\n");
    scanf("%d%*c",&a);
    if(a<0)
        printf("Error: numero negativo\n");
    else
    {
        printf("La suma de sus digitos es %d\n", suma_digitos(a));
           
    }
        
}

int suma_digitos(int n)

{
    if (n==0)
        return(0);
    else
        return ((n%10) + suma_digitos(n/10));
}