#include <stdio.h>
/*
Exercicio 4 - Ler um numero N que calcule e escreva o valor de E.
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int N = 0;
  int fat = 1;
  float result = 1;
  //leitura
  printf("Digite o N: \n");
  scanf("%d%*c",&N);
  //processamento em dois loops, 1 para o valor N alterar e outro para calcular o fatorial
  for (int i=1;i<=N;i++){
	  //loop retornando o fatorial de N
    for(int j=1;j<=i;j++){
      fat = fat * j;
    }
    result += (float) 1/fat;
    fat =  1;
  }
  //resultado
  printf("Resultado do calculo = %.2f\n",result);
  printf("Fim do programa.\n");
  return 0;
}