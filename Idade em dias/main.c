#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {	
	setlocale (LC_ALL, "");
	int ano, meses, dias, diastotal;
	float resposta;
	idadeemanos:
	system("cls");
	printf("Digite seus anos de vida: \n");
	scanf("%d", &ano);
	system("cls");
	printf("Digite seus meses de vida: \n");
	scanf("%d", &meses);
	if (meses > 12) {
		system("cls");
		printf("Você digitou um valor incorreto. \n");
		system("pause");
		goto idadeemanos;
	}
	system("cls");
	printf("Digite seus dias de vida: \n");
	scanf("%d", &dias);
	if (dias > 30) {
		system("cls");
		printf("Você digitou um valor incorreto. \n");
		system("pause");
		goto idadeemanos;
	}
	system("cls");
	printf("Você possui %d ano(s) %d mes(es) %d dia(s)? \n1 - Sim\n2 - Não \n", ano, meses, dias);
	scanf("%f", &resposta);
	if (resposta == 1)
	{
		diastotal = (ano * 365) + (meses * 30) + dias;
		system("cls");
		printf("Você possui %d dias de vida. \n", diastotal);
		system("pause");
	}
	else
	{
		goto idadeemanos;
	}
	
	return;
}

