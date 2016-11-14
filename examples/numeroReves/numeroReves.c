#include <stdio.h>
/*
 Resolución en papel para el número 123.

 Declarando variables:
 variables: numero,resto;

 Número ingresado:
 	numero = 123;

 Procedimiento:
 	
 		123 % 10 = 3;   --> Capturamos este número.
 		123 - 3  = 120; --> Paso no necesario, la divison es un entero, las variables son enteras.
 		123 / 10 = 12;  --> Nuevo valor de "numero".
		-------------------
		12  % 10 = 2;  --> Capturamos este número.
		12  / 10 = 1;  --> Nuevo valor de "numero".
		-------------------
		1   % 10 = 1;  --> Capturamos este número.
		1   / 10 = 0;  --> Nuevo valor de "numero".
		------------------- 
		0   % 10 = 0 --> Valor que no se debe mostrar.



		---> "0" no se debe imprimir en la terminal,seria la condición, 
		cuando el nuevo valor de "numero" es igual a  cero la repetición termina(bucle).

		De aqui no fijamos dos cosas:
			- 10 es constante.
			- La repitición termina cuando el nuevo valor de "numero" es cero.
		
	- Function:
			resto = numero % 10;
			numero = resto /10;  >>> Es el nuevo valor de "numero"
*/


int main(int argc, char const *argv[])
{
	int numero, resto;
	// Mostramos mensaje en la terminal.
	puts("Ingresar número: ");
	// Ingresamos valor para "numero".
	scanf("%d", &numero);
	puts("El nuevo número es: ");
	// Iniciamos bucle con la condición "numero" diferente de cero.
	while(numero != 0){
		resto = numero % 10; // valor que capturamos.
		numero = numero / 10; // Nuevo valor de "numero"

		printf("%d", resto);
	}
	// Salto de linea.
	printf("\n");
	return 0;
}