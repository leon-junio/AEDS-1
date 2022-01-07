#include <stdio.h>
/*
Exercicio 6 - Ler um numero N que calcule e escreva o valor de uma Soma e seus termos
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int N = 0;
  float result = 1;
  //leitura
  printf("Digite o N: \n");
  scanf("%d%*c",&N);
  //processamento em loop para encontrar o termo e realizar a soma
  for (int i=1;i<=N;i++){
    result+= (float) 1/i;
    printf("Termo = %d --> %f\n",i,result);
  }
  //resultado
  printf("Resultado do calculo = %f\n",result);
  printf("Fim do programa.\n");
  return 0;
}