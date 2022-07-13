#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	int numero1 = 0, numero2 = 1, soma;

	printf("\n%d  |  %d\n", numero2, numero2);

	for (int i = 2; i <= 30; i++) {

		soma = numero1 + numero2;
		numero1 = numero2;
		numero2 = soma;

		printf("\n%d  |  %d\n", i, soma);
	}

	system("PAUSE");
	return 0;
}