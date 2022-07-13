#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	int nMes;

	printf("Digite um n�mero inteiro de 1 � 12: \n\n");
	scanf_s("%d", &nMes);

	if (nMes == 1) {
		printf("\n\nO m�s correspondente � Janeiro\n\n\n");
	}
	else if (nMes == 2) {
		printf("\n\nO m�s correspondente � Fevereiro\n\n\n");
	}
	else if (nMes == 3) {
		printf("\n\nO m�s correspondente � Mar�o\n\n\n");
	}
	else if (nMes == 4) {
		printf("\n\nO m�s correspondente � Abril\n\n\n");
	}
	else if (nMes == 5) {
		printf("\n\nO m�s correspondente � Maio\n\n\n");
	}
	else if (nMes == 6) {
		printf("\n\nO m�s correspondente � Junho\n\n\n");
	}
	else if (nMes == 7) {
		printf("\n\nO m�s correspondente � Julho\n\n\n");
	}
	else if (nMes == 8) {
		printf("\n\nO m�s correspondente � Agosto\n\n\n");
	}
	else if (nMes == 9) {
		printf("\n\nO m�s correspondente � Setembro\n\n\n");
	}
	else if (nMes == 10) {
		printf("\n\nO m�s correspondente � Outubro\n\n\n");
	}
	else if (nMes == 11) {
		printf("\n\nO m�s correspondente � Novembro\n\n\n");
	}
	else if (nMes == 12) {
		printf("\n\nO m�s correspondente � Dezembro\n\n\n");
	}
	else {
		printf("\n\n----------ERROR!---------\n\n\n");
	}

	system("PAUSE");
	return 0;
}