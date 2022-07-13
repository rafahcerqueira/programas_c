#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	float opcao, quadrado, lado, triangulo, base, altura, retangulo, circulo, raio;

	printf("\n\tQual c�lculo gostaria: \n\n(1) Quadrado\n(2) Tri�ngulo\n(3) Ret�ngulo\n(4) C�rculo\n\n");
	scanf_s("%f", &opcao);

	if (opcao == 1) {

		printf("\n\nValor do lado do quadrado: ");
		scanf_s("%f", &lado);

		quadrado = lado * lado;

		printf("\n\nO valor da �rea do quadrado �: %.2f\n\n\n", quadrado);
	}
	else if (opcao == 2) {

		printf("\n\nValor da base do tri�ngulo: ");
		scanf_s("%f", &base);

		printf("\n\nValor da altura do tri�ngulo: ");
		scanf_s("%f", &altura);

		triangulo = (base * altura) / 2;

		printf("\n\nO valor da �rea do tri�ngulo �: %.2f\n\n\n", triangulo);
	}
	else if (opcao == 3) {

		printf("\n\nValor da base do ret�ngulo: ");
		scanf_s("%f", &base);

		printf("\n\nValor da altura do ret�ngulo: ");
		scanf_s("%f", &altura);

		retangulo = base * altura;

		printf("\n\nO valor da �rea do ret�ngulo �: %.2f\n\n\n", retangulo);
	}
	else if (opcao == 4) {

		printf("\n\nValor do raio do c�rculo: ");
		scanf_s("%f", &raio);

		circulo = 3.14159265359 * (raio * raio);

		printf("\n\nO valor da �rea do c�rculo �: %.2f\n\n\n", circulo);
	}
	else {
		printf("\n\n-------------ERROR!-------------\n\n\n");
	}


	system("PAUSE");
	return 0;
}