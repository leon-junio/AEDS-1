/*
Exercicio 1 - Armazenar dois inteiros em variaveis e depois analisar o endereço de ambos para ver qual é maior que o outro
Autor: Leon Júnio Martins Ferreira
Data: 21/10/2021
*/
#include <stdio.h>
int main(void) {
  //declarando e iniciando variaveis
  int a = 0,b = 0;
  //criando dois ponteiros
  int *aPtr,*bPtr;
  //passando o endereço das variaveis a e b para os ponteiros de ambos para que iniciem com o valor de 0
  aPtr = &a;
  bPtr = &b;
  //leitura
  printf("Digite um valor para o inteiro 1 \n");
  scanf("%d%*c",&a);
  printf("Digite um valor para o inteiro 2 \n");
  scanf("%d%*c",&b);
  //comparando os valores dos ponteiros de a e b para ver qual é maior
  if(*aPtr>*bPtr){
      printf("O maior valor é %d \n",*aPtr);
  }else{
      printf("O maior valor é %d \n",*bPtr);
  }
  printf("FIM DO PROGRAMA \n");
  return 0;
}