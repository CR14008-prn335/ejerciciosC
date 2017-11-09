#include <stdio.h>

struct persona{
	char nombre[30];
	int edad;
	float altura;
	float peso;
	
};
void main() {
	struct persona mar;
	printf("sizeof(persona): %d \n",sizeof(mar));
	mar.edad=10;
	printf("la edad de la persona es:%d \n",mar.edad);
	puts("puto");
	
}

