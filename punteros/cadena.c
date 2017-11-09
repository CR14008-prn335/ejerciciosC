#include <stdio.h>

int main() {
	char cadena[1000];
	printf("ingrese una cadena \n");
	fgets(cadena,1000,stdin);
	printf("la cadena es: %s \n",cadena);
	
	
	return 0;
}

