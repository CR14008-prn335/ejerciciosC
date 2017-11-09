 #include <stdio.h>

int main() {
	int i,j,aux,*a,*b,vector[5]={5,1,4,2,3};
	printf("Imprimiendo el vector original: \n");
		for(i=0;i<5;i++){
		printf("%d \t",vector[i]);
	}
		
		printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(vector[j]>=vector[j+1]){
			a=&vector[j];
			b=&vector[j+1];
			aux=*a;
			*a=*b;
			*b=aux;
			}
		}
	}
	
	printf("el vector ordenado es: \n");
	for(i=0;i<5;i++){
		printf("%d \t",vector[i]);
	}
	return 0;
}

