#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	float som;
	float valordasoma;
    printf("Digite o valor em fahrenheit \n");
    scanf("%f", &valordasoma);
    /* Soma do valor */
    som = ((valordasoma + 32) * 5) / 9;
    system("cls");
    printf("O valor em celsius: %f °C \n", som);
    system("pause");
    return 0;
}
