#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale (LC_ALL, "");
  float totaldevotos, votosn, votosb, votosv, votosbrancos, votosnulos, votosvalidos, somadevotos;
  headerlogo:
  system("cls");
  /* Intera��o para digitar os valores. */
  printf("Digite o total de eleitores no munic�pio: \n");
  scanf("%f", &totaldevotos);
  printf("Digite o n� de votos v�lidos: \n");
  scanf("%f", &votosv);
  printf("Digite o n� de votos nulos: \n");
  scanf("%f", &votosn);
  printf("Digite os n� de votos brancos: \n");
  scanf("%f", &votosb);
  /* Soma de votos */
  somadevotos = (votosb + votosn + votosv);
  /* Condi��o se o valor ultrapassar o total digitado */
  if (somadevotos == totaldevotos) {
  	goto percentualdevotos;
  }
  else {
  	system("cls");
  	printf("Os valores n�o conicidem com o total de eleitores \n");
  	system("pause");
  	goto headerlogo;
  }
  percentualdevotos:
  system("cls");
  /* Resultado do percentual calculado */
  votosbrancos = (votosb / totaldevotos) * 100;
  votosnulos = (votosn / totaldevotos) * 100;
  votosvalidos = (votosv / totaldevotos) * 100;
  printf("O percentual de votos v�lidos: %f \nO percentual de votos nulos: %f \nO percentual de votos brancos: %f \n", votosvalidos, votosnulos, votosbrancos);
  system("pause");
  return 0;
}
