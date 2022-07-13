#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "PORTUGUESE");

	char dados[7][30];
	int i;

	printf("Digite seus dados na ordem:\n\n" "->Nome\n" "->Idade\n" "->Telefone\n" "->Email\n" "->Cidade\n" "->Bairro\n" "->Sexo\n\n");


	for (i = 0; i < 7; i++) {

		printf("Digite: ");
		gets_s(dados[i]);
	}

	printf("\n\nSeus dados ordenados s�o:\n");

	for (i = 0; i < 7; i++) {

		printf("\n--> \t %s", dados[i]);
	}

	printf("\n\n");

	system("PAUSE");
	return 0;
}