#include <stdio.h>

int palindromo(int n, int numero);
int main()
{
int a, inv;
int numero = 1;
int tmp;
printf("Ingrese un numero de mas de dos cifras \n");
scanf("%d", &a);
	tmp=a;
	
	if(a<10){
		printf("ERROR numero no valido \n");
		return 1;
	}else{
	
		while (tmp>=10)
		{
			tmp=tmp/10;
			numero=numero*10;
		}
		
		
	inv = palindromo(a, numero);
	
	
	if (inv==a){
		printf("el numero que ingreso es palindromo \n");
	}else{
		printf("el numero que ingreso no es palindromo \n");
	}
	return 0;
	}
}

int palindromo(int n , int numero)
{
	int resto, cociente;
	
	if (n<10)  
	return 1;
	else
	{
		resto = n % 10;
		cociente = n / 10;
		return resto*numero + palindromo(cociente, numero/10);
	}
}
