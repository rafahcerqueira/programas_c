#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero, j, soma = 0;
	int numDivisores = 0;

	for (numero = 2; numero < 100; numero++) {

		numDivisores = 0;

		for (j = 1; j <= numero / 2; j++) {
			
			if ((numero % j) == 0) {

				numDivisores++;
			}
			if (numDivisores > 1) { 

				break; 
			}
		}
		if (numDivisores == 1) {

			printf("%5d\n", numero);
			soma += numero; 
		}
	}

	printf("\n\n\tSoma dos numeros primos: %d\n\n\n", soma);

	system("PAUSE");
	return 0;
}