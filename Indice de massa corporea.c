#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	float ano, meses, dias, answer;
	printf("Digite seus anos de vida: \n");
	scanf("%f", ano);
	printf("Digite seus meses de vida: \n");
	scanf("%f", meses);
	printf("Digite seus dias de vida: \n");
	scanf("%f", dias);
	printf("Você possui %f ano(s) %f mes(es) %f dia(s)? \nSim Ou Não");
	scanf("%f", answer);
	return 0;
}
