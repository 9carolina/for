#include<stdio.h>
int main(){
	int x=0, y=1, z, cont, a;
	
	printf("Ingrese hasta cuantos numeros imprimir: "); 
	scanf("%d", &a);
	
	printf("%d\n", x);  //o\n1\n
	printf("%d\n", y);
	
	for (cont=1; cont<=a; cont++){
		z=x+y;
		printf("%d\n", z);
		x=y;
		y=z;
	}
	return 0;
}
