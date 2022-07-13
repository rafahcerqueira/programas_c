#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	float media = 0, nota[10];
	int i = 0;

	for (i = 0; i <= 9; i++) {

		printf("\nDigite a nota: ");
		scanf_s("%f", &nota[i]);

		if (nota[i] >= 0 && nota[i] <= 10) {

			media += nota[i];
		}
		else {

			printf("\n\n---------ERROR!---------\n\n\n");
			return 0;
		}
	}

	printf("\n\n\tA m�dia �: %.2f\n\n", media /= 10);

	printf("\n\nNotas maiores ou iguais a m�dia: \n");

	for (i = 1; i < 10; i++) {

		if (nota[i] >= media) {

			printf("\n%.2f", nota[i]);
		}
	}

	printf("\n\n\n");

	system("PAUSE");
	return 0;
}