#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	float nota[4], trabalho[3], media = 0.0, totalNota = 0.0, totalTrabalho = 0.0;
	int i = 0, j = 0;

	for (i = 0; i < 4; i++) {

		printf("Insira sua nota da prova: ");
		scanf_s("%f", &nota[i]);

		if (nota[i] >= 0 && nota[i] <= 10) {

			totalNota = totalNota + nota[i];
		}
		else {

			printf("\n\nERROR!\n\n");
			return 0;
		}
	}

	printf("\n");

	for (j = 0; j < 3; j++) {

		printf("Insira nota do trabalho: ");
		scanf_s("%f", &trabalho[j]);
		if (trabalho[j] >= 0 && trabalho[j] <= 10) {

			totalTrabalho = totalTrabalho + trabalho[j];
		}
		else {

			printf("\n\nERROR!\n\n");
			return 0;
		}
	}
	media = (totalNota + totalTrabalho) / (j+i);

	printf("\n----------------------------------------------------");
	printf("\n\n\tA sua m�dia final sera de: %.2f\n", media);
	printf("\n----------------------------------------------------\n\n\n");

	system("PAUSE");
	return 0;
}