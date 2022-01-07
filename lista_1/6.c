#include <stdio.h>
/*
Exercicio 6 - Ler os coeficientes a e b de uma equação de primeiro grau e escrever sua raiz
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float a=0,b=0,equa=0;
  //leitura
  printf("Calcular uma raiz de equação do primeiro grau ax+b=0\n");
  printf("Digite o coeficiente a:\n");
  scanf("%f%*c",&a);
   printf("Digite o coeficiente b:\n");
  scanf("%f%*c",&b);
  //processamento e saida
  equa = (b*-1)/a;
  printf("A raiz é %.2f\n",equa);
  printf("FIM DO PROGRAMA\n");
  return 0;
}