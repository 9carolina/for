//Programa que imprime los numeros pares del 1 al 100 y la suma de todos ellos
#include<stdio.h>
int main(){
	int x, sum=0;
	
	for (x=1; x<=100; x++)
		if (x%2==0){
		printf("%d\n", x);
		sum=sum+x;                                   //operador unario puede ser sum*=x;
		}
	printf("\nSuma de numeros pares: %d\n", sum);
	
	return 0;
}
