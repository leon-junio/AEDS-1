#include <stdio.h>
/*
Exercicio 5 - Calcular valores de uma diaria de um hotel com 75 apartamentos e mostrar o valor total para algumas ocasiões
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float valor = 0,diaria = 0,valor1 = 0,valor2 = 0;
  //leitura
  printf("Calcular a diaria de um hotel!\n");
  printf("Digite o valor normal da diaria do hotel:\n");
  scanf("%f%*c",&valor);
  //processamento e saida
  diaria = valor-(valor*0.25);
  printf("a) O valor da diaria promocional é %.2f\n",diaria);
  valor1 = (75*0.80)*diaria;
  printf("b) O valor total arrecadado com 80%% da capacidade\ncom a diaria promocional é de R$ %.2f\n",valor1);
  valor2 = (75*0.50)*valor;
  printf("c) O valor total arrecadado com 50%% da capacidade\ncom a diaria promocional é de R$ %.2f\n",valor2);
  printf("d) A diferença entre os dois valores arrecadados\n é de R$ %.2f\n",valor1-valor2);
  printf("FIM DO PROGRAMA\n");
  return 0;
}