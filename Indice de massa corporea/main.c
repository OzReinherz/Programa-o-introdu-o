#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	float peso;
	float altura;
	float calculodm;
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
    printf("Digite sua altura: \n");
	scanf("%f", &altura);
	calculodm = peso / (altura * altura);
	if (calculodm<18.5) {
    printf("Você está abaixo do peso ideal \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
    if (calculodm>18.5 && calculodm<24.9) {
    printf("Você está em seu peso normal \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
	if (calculodm>25 && calculodm<29.9) {
    printf("Você está acima de seu peso (sobrepeso) \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
	if (calculodm>30 && calculodm<34.9) {
    printf("Obesidade grau I \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
	if (calculodm>35 && calculodm<39.9) {
    printf("Obesidade grau II \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
	if (calculodm>40) {
    printf("Obesidade grau III \nSeu IMC é: %f \n", calculodm);
    system("pause");
    return;
	}
}

