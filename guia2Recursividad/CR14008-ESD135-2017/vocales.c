#include <stdio.h>
int contarvocales (char *);//declarando la funcion de tipo entero que recibe como parametro un puntero de tipo char
int main() {
	char vocal[100];//declarando el vector donde se almacenara la palabra
	printf("digite su nombre por favor\n");//pideindo la palabra al usuario
	fgets(vocal,100,stdin);//guardando la palabra ingresada por el usuario en el vector vocal con el metodo fgets que tiene tres parametros el nombre de la variable el valor maximo de caracteres que puede almacenar dicha variable por ultimo el metodo
	
	printf("",contarvocales(vocal));//invocando el metodo para contar las vocales y mostrarlas en pantalla la funcion recibe como parametro la palabra registrada en el vector vocal
	return 0;
}


int contarvocales(char *s){
	int contador=0,a=0,e=0,i=0,o=0,u=0;//declarando las variables para contar las vocales
	while(*s){//declarando un while para recorrer toda la palabra
		switch(*s){//switch para ver los casos donde hay vocales
		case 'a':
			a++;//si el caso encuentra una a este suma un valor a la variable 
			contador=contador+1;//va contando las vocales completas  y asi sucesivamente para todos los casos
			break; 
		case 'e':
			e++;
			contador=contador+1;
			break;
		case 'i':
			i++;
			contador=contador+1;
            break;
		case 'o':
			o++;
			contador=contador+1;
			break;
		case 'u': 
			u++;
			contador=contador+1;
			break;
			
		}
		
		*s++;//aumentando en una l la palabra para recorrer toda la palabra mientras no la recorra toda seguira en while
	}
	
	return (printf("el numero totales de vocales en la palabra es: %i",contador),printf("\nel numero de a es: %i\n",a),printf("el numero de e es: %i\n",e),printf("el numero de i es: %i\n",i),printf("el numero de o es: %i\n",o),printf("el numero de u es: %i\n",u));//retornado todos los valores esperados
}