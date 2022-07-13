#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	float salarioBruto, valeTransporte, valeAlimentacao;

	printf("Digite o valor do seu sal�rio bruto: ");
	scanf_s("%f", &salarioBruto);

	printf("\nDigite o valor do seu vale-transporte: ");
	scanf_s("%f", &valeTransporte);

	printf("\nDigite o valor do seu vale-alimenta��o: ");
	scanf_s("%f", &valeAlimentacao);

	if (salarioBruto <= 3000) {
		
		salarioBruto = salarioBruto - (salarioBruto * 0.05);

		printf("\n\nO desconto de 5%%, sendo assim, segue atualiza��es:\n\nNovo Sal�rio: R$%.2f\nVale-transporte: R$%.2f\nVale-alimenta��o: R$%.2f\n\n\n", salarioBruto, valeTransporte, valeAlimentacao);
	}
	else if (salarioBruto >= 3000.01 && salarioBruto <= 5000) { //Utilize v�rgula em vez de ponto se precisar!

		salarioBruto = salarioBruto - (salarioBruto * 0.08);

		printf("\n\nO desconto de 8%%, sendo assim, segue atualiza��es:\n\nNovo Sal�rio: R$%.2f\nVale-transporte: R$%.2f\nVale-alimenta��o: R$%.2f\n\n\n", salarioBruto, valeTransporte, valeAlimentacao);
	}
	else if (salarioBruto > 5000) {

		salarioBruto = salarioBruto - (salarioBruto * 0.10);

		printf("\n\nO desconto de 10%%, sendo assim, segue atualiza��es:\n\nNovo Sal�rio: R$%.2f\nVale-transporte: R$%.2f\nVale-alimenta��o: R$%.2f\n\n\n", salarioBruto, valeTransporte, valeAlimentacao);
	}
	else {
		printf("\n\n------------ERROR!------------\n\n\n");
	}

	system("PAUSE");
	return 0;
}