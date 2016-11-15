/*
 * factorial.c.
 * Author: Franz Victorio
 * Description: Factorial de un número.
 * Date: 14/11/16
 */

#include <stdio.h>
// Función recursiva.
int factorial(int n){
	int resultado;
	if(n <= 1){
		return 1;
	}else{
		resultado = n * factorial(n - 1);
	}
	return resultado;
}

int main(){
	int numero;
	puts("Ingresar número: ");
	scanf("%d", &numero);
	printf("Factorial de %d es: %d\n", numero, factorial(numero));
	return 0;
}

