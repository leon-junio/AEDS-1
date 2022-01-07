#include <stdio.h>
/*
Exercicio 8 - Ler um numero L e escrever todos os termos da sequencia de fibonacci menores que L
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
  //processamento em loop
  for (int i=1;i<=L;i++){
    //Apresentar o resultado antes para incluir o zero da sequencia
    if(contador<L){
		//Apos verificar se o resultado do termo é menor que L imprimir o termo
   printf("Termo %d da sequencia = %d\n",i,contador);
    }
   soma = result + contador;
   contador = result;
   result = soma;
  }
  printf("Fim do programa.\n");
  return 0;
}