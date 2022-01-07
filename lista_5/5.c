/*
Exercicio 5 - Criar variaveis para um inteiro, um real e um caracter e após isso um ponteiro que aponta para cada um deles. Depois adicionar novos valores via os ponteiros.
Autor: Leon Júnio Martins Ferreira
Data: 22/10/2021
*/
#include <stdio.h>
int main(void) {
  //declarando e iniciando variaveis
  int i = 1;
  float f = 2.5;
  char c = 'a';
  int *iPtr;
  float *fPtr;
  char *cPtr;
  //local onde eu passo o endereço das variaveis para seus respectivos ponteiros
  iPtr = &i;
  fPtr = &f;
  cPtr = &c;
  //listagem inicial de todas as variaveis,ponteiros e seus valores
  printf("Antes da alteração \n");
  printf("Inteiro: \n");
  printf("Ponteiro: \n");
  //apresento aqui o endereço do ponteiro,endereço que o ponteiro aponta e o valor apontado por esse endereço
  printf("%p %p e %d \n",&iPtr,iPtr,*iPtr);
  printf("Variavel: \n");
  //apresento aqui o valor do endereço da variavel e o valor armazenado nesse endereço
  printf("%p e %d \n",&i,i);
  printf("Real: \n");
  printf("Ponteiro: \n");
  printf("%p %p e %f \n",&fPtr,fPtr,*fPtr);
  printf("Variavel: \n");
  printf("%p e %f \n",&f,f);
  printf("Caracter: \n");
  printf("Ponteiro: \n");
  printf("%p %p e %c \n",&cPtr,cPtr,*cPtr);
  printf("Variavel: \n");
  printf("%p e %c \n",&c,c);
  //leitura de novos dados via ponteiros
  printf("Digite um valor inteiro\n");
  scanf("%d%*c",iPtr);
  //defino que o endereço que o ponteiro aponta receba como valor a entrada digitada
  printf("Digite um valor real \n");
  scanf("%f%*c",fPtr);
  printf("Digite um caracter \n");
  scanf("%c%*c",cPtr);
  //apresento o resultado pos todas as alterações
  printf("Depois da alteração \n");
  printf("Inteiro: \n");
  printf("Ponteiro: \n");
  printf("%p %p e %d \n",&iPtr,iPtr,*iPtr);
  //nessa listagem é visivel que os endereços nao se alteram a não ser que seja pedido enquanto o programa é executado apenas seus valores se alteraram nas entradas
  printf("Variavel: \n");
  printf("%p e %d \n",&i,i);
  printf("Real: \n");
  printf("Ponteiro: \n");
  printf("%p %p e %f \n",&fPtr,fPtr,*fPtr);
  printf("Variavel: \n");
  printf("%p e %f \n",&f,f);
  printf("Caracter: \n");
  printf("Ponteiro: \n");
  printf("%p %p e %c \n",&cPtr,cPtr,*cPtr);
  printf("Variavel: \n");
  printf("%p e %c \n",&c,c);
  printf("FIM DO PROGRAMA \n");
  return 0;
}