#include <stdio.h>
/*
Exercicio 7 - Calcular o valor de Y com base no valor X digitado pelo usuario
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float x = 0,y=0;
  //leitura
  printf("Calcular o valor de Y\n");
  printf("Digite o valor de X:\n");
  scanf("%f%*c",&x);
  //processamento e saida
  if(x<=1){
    y = 1;
  }else if(x>1 && x<=2){
    y =2;
  }else if(x>2 && x<=3){
    y = x*x;
  }else if(x>3){
    y = (x*x)*x;
  }
  printf("O valor de Y é %.2f\n",y);
  printf("FIM DO PROGRAMA\n");
  return 0;
}