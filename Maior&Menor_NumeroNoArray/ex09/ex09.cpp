#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	float v[10], maior, menor;

	for (int i = 0; i < 10; i++) {
		
		printf("Insira um n�mero: ");
		scanf_s("%f", &v[i]);
	}

	maior = v[0];
	menor = v[9];

	for (int i = 0; i < 10; i++) {

		if (v[i] > maior) {

			maior = v[i];
		}
		else if (v[i] < menor) {

			menor = v[i];
		}
	}

	printf("\n\n\tMenor n�mero: %.2f  |  Maior n�mero: %.2f\n\n\n", menor, maior);

	system("PAUSE");
	return 0;
}