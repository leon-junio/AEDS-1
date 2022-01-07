/*
Exercicio 8 - Faça  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba  estes  3  valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o  segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes
Data: 22/10/2021
*/
#include <stdio.h>
//função para retornar o valor que é maior e o que é menor e o do meio
int ordenar(int *a,int *b,int *c,int *ig){
  if(*a>*b && *b>*c){
      int bx = *b;
      int cx = *a;
      return *a=*c,*b=bx,*c=cx,*ig=1;
  }else if(*a>*b && *c>*b){
    int bx = *c;
      int cx = *a;
      return *a=*b,*b=bx,*c=cx,*ig=1;
  }
  else if(*b>*a && *a>*c){
    int bx = *b;
    int cx = *a;
    return *a=*c,*b=cx,*c=bx,*ig=1;
  }
  else if(*b>*a && *c>*a){
    int bx = *a;
    int cx = *b;
    return *a=bx,*b=*c,*c=cx,*ig=1;
  }
   else if(*c>*a && *b>*a){
    int bx = *b;
    int cx = *c;
    return *a=*a,*b=bx,*c=cx,*ig=1;
  }
  else if(*c>*a && *a>*b){
    int bx = *b;
    int cx = *c;
    return *a=*a,*b=cx,*c=bx,*ig=1;
  }
  return *a=*a,*b=*b,*c=*c,*ig=0;
}
int main(void) {
  //declarando e iniciando variaveis
  int a = 0,b = 0,c = 0,ig = 0;
  int *aPtr,*bPtr,*cPtr,*igPtr;
  //passando o endereço das variaveis a e b para os ponteiros de ambos para que iniciem com o valor de 0
  aPtr = &a;
  bPtr = &b;
  cPtr = &c;
  igPtr = &ig;
  //leitura
  printf("Digite um valor para o inteiro 1 \n");
  scanf("%d%*c",&a);
  printf("Digite um valor para o inteiro 2 \n");
  scanf("%d%*c",&b);
    printf("Digite um valor para o inteiro 3 \n");
  scanf("%d%*c",&c);
  //passando os ponteiros para verificação na função
  ordenar(aPtr,bPtr,cPtr,igPtr);
  //imprimindo resultados
  printf("%d primeiro \n",*aPtr);
  printf("%d segundo \n",*bPtr);
  printf("%d terceiro \n",*cPtr);
  printf("Igualdade: %d  \n",*igPtr);
  printf("FIM DO PROGRAMA \n");
  return 0;
}