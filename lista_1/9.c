#include <stdio.h>
/*
Exercicio 9 - Identificar um simbolo digitado pelo teclado 
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  char simbolo = 0;
  //leitura
  printf("Qual o simbolo?? \n");
  printf("Insira qualquer simbolo:\n");
  scanf("%c%*c",&simbolo);
  //processamento do simbolo digitado
  //resultado já é impresso de dentro do switch
  switch(simbolo){
    case '>': 
    printf("SINAL DE MAIOR \n");
    break;
    case '<': 
    printf("SINAL DE MENOR \n");
    break;
    case '=': 
     printf("SINAL DE IGUAL \n");
    break;
    default: 
    printf("OUTRO SINAL \n");
    break;
  }
  printf("FIM DO PROGRAMA\n");
  return 0;
}