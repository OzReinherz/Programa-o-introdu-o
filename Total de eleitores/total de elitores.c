#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale (LC_ALL, "");
  float totaldevotos, votosn, votosb, votosv, votosbrancos, votosnulos, votosvalidos, somadevotos;
  headerlogo:
  system("cls");
  /* Interação para digitar os valores. */
  printf("Digite o total de eleitores no município: \n");
  scanf("%f", &totaldevotos);
  printf("Digite o nº de votos válidos: \n");
  scanf("%f", &votosv);
  printf("Digite o nº de votos nulos: \n");
  scanf("%f", &votosn);
  printf("Digite os nº de votos brancos: \n");
  scanf("%f", &votosb);
  /* Soma de votos */
  somadevotos = (votosb + votosn + votosv);
  /* Condição se o valor ultrapassar o total digitado */
  if (somadevotos == totaldevotos) {
  	goto percentualdevotos;
  }
  else {
  	system("cls");
  	printf("Os valores não conicidem com o total de eleitores \n");
  	system("pause");
  	goto headerlogo;
  }
  percentualdevotos:
  system("cls");
  /* Resultado do percentual calculado */
  votosbrancos = (votosb / totaldevotos) * 100;
  votosnulos = (votosn / totaldevotos) * 100;
  votosvalidos = (votosv / totaldevotos) * 100;
  printf("O percentual de votos válidos: %f \nO percentual de votos nulos: %f \nO percentual de votos brancos: %f \n", votosvalidos, votosnulos, votosbrancos);
  system("pause");
  return 0;
}
