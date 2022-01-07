#include <stdio.h>
/*
Exercicio 2 - Ler dois numeros e fazer sua adição e dependendo do resultado somar mais numeros ao resultado
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  int a=0,b=0,soma=0;
  //leitura
  printf("Digite dois números inteiros para saber\n qual é o maior entre eles\n");
  printf("Digite o primeiro número\n");
  scanf("%d%*c",&a);
  printf("Digite o segundo número\n");
  scanf("%d%*c",&b);
  //processamento e saida
  soma = a+b;
  if(soma>=10){
    soma +=5;
  }else{
    soma +=7;
  }
  //resultado
  printf("O resultado da soma é %d\n",soma);
  printf("FIM DO PROGRAMA\n");
  return 0;
}