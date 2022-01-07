/*
Exercicio 7 - Faça  um  programa  que  leia  dois  valores  inteiros  e  chame  uma  função  que  receba  estes  2  valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda  variável
Data: 22/10/2021
*/
#include <stdio.h>
//função para retornar o valor que é maior e o que é menor
int verificarMaior(int *a,int *b){
  if(*a>*b){
    //auxiliar para nao perder o valor de b
    int bx = *b;
    //retorno de ponteiro ou seja do endereço alterando de acordo com a ordem do maior e menor numero
      return *a=*a,*b=bx;
  }else{
    int ax = 0;
    ax = *a;
    return *a=*b,*b=ax;
  }
}
int main(void) {
  //declarando e iniciando variaveis
  int a = 0,b = 0;
  //criando dois ponteiros
  int maior =0, menor=0;
  int *aPtr,*bPtr;
  //passando o endereço das variaveis a e b para os ponteiros de ambos para que iniciem com o valor de 0
  aPtr = &a;
  bPtr = &b;
  //leitura
  printf("Digite um valor para o inteiro 1 \n");
  scanf("%d%*c",&a);
  printf("Digite um valor para o inteiro 2 \n");
  scanf("%d%*c",&b);
  //passando os ponteiros para verificação na função
  verificarMaior(aPtr,bPtr);
  printf("%d Maior \n",*aPtr);
  printf("%d Menor \n",*bPtr);
  printf("FIM DO PROGRAMA \n");
  return 0;
}