#include <stdio.h>
/*
Exercicio 1 - Ler dois numeros e imprimir o maior deles
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float a=0,b=0;
  //leitura
  printf("Digite dois números para saber\n qual é o maior entre eles\n");
  printf("Digite o primeiro número\n");
  scanf("%f%*c",&a);
  printf("Digite o segundo número\n");
  scanf("%f%*c",&b);
  //processamento e saida
  if(a>b){
    printf("O maior é %.2f\n",a);
  }else if(b>a){
    printf("O maior é %.2f\n",b);
  }else{
    printf("Os números são iguais\n");
  }
  printf("FIM DO PROGRAMA\n");
  return 0;
}