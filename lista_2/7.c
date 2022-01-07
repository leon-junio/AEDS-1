#include <stdio.h>
/*
Exercicio 7 - Ler um numero L e escrever L termos da sequencia de fibonacci
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int L= 0;
  int result = 1;
  int soma = 0;
  int contador = 0;
  //leitura
  printf("Digite o numero de termos da sequencia : \n");
  scanf("%d%*c",&L);
  //processamento em loop para variar ate o L termo
  for (int i=1;i<=L;i++){
    //Apresentar o resultado antes para incluir o zero da sequencia
   printf("Termo %d da sequencia = %d\n",i,contador);
   //Usando sistema de variaveis auxiliares para reduzir codigo
   soma = result + contador;
   contador = result;
   result = soma;
  }
  printf("Fim do programa.\n");
  return 0;
}