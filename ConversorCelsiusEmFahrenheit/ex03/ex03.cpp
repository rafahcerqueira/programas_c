#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

int main(void) {

	float c, f;

	setlocale(LC_ALL, "Portuguese");

	printf("Temperatura em Celsius para a conversao em Fahrenheit: "); //Utilize a v�rgula em vez de ponto se precisar!
	scanf_s("%f", &c);

	f = (c * 1.8) + 32;

	printf("\n\n\n\t%.2f�C = %.2f�F\n\n\n", c, f);

	system("PAUSE");
	return 0;
}
