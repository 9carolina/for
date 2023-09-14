//Obtener la secuencia de numeros pares entre 2 rangos
#include <stdio.h>
int main (){
	int num1, num2, x;
	
	printf("Primer numero: "); 
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf ("%d", &num2);
	
	if (num1>num2){
		printf("Valores incorrectos\n");
	}	
	else{
		for (x=num1; x<=num2; x++){
			if (x%2==0)
			printf("\n%d", x);}
	}
	return 0;
}
