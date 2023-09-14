#include<stdio.h>
int main(){
	int num, i, cantidad;
	float suma=0;
	
	printf("Numero de valores a calcular promedio: ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++){
		printf("Numero: ");
		scanf("%d", &cantidad);
		suma=suma+cantidad;
	}
	suma=suma/num;
	printf("Suma es igual a: %.2f", suma);

	return 0;
}
