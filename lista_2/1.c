#include <stdio.h>
#include <string.h> 
//importei a biblioteca para poder usar o strcmp
#include <stdlib.h>
//importei a biblioteca para poder usar o atoi
/*
Exercicio 1 - Ler uma sequencia de valores inteiros e retornar o valor de   quantos numeros são positivos, negativos e zeros.
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int totalNum = 0;
  char string[] = "0";
  int numLido = 0;
  int numPos = 0,numNeg = 0,numZero = 0;
  printf("Leitura de números inteiros \n");
   do{
      printf("Digite um número inteiro para ocupar a posição %d:\nOu digite 'f' para sair do programa! \n",(totalNum+1));
      scanf("%s%*c",string);
    //verificações
	//comando strcmp para verificar se uma string é igual a outra, caso seja retorna o valor 0
    if(strcmp(string,"f")!=0){
	//comando atoi para transformar uma string em um inteiro	
      numLido = atoi(string);
	//processamento dos dados
   if(numLido>0){
     numPos++;
   }else if(numLido<0){
     numNeg++;
   }else if(numLido==0){
     numZero++;
   }
   totalNum++;
   }
   //final do while com condição de parada estabelecida pela comparação de duas strings
   }while(strcmp(string,"f")!=0);
   //resultados
  printf("Resultados:\n");
  printf(" O total de números positivos foi: %d \n O total de números negativos foi: %d\n O total de números zeros foi: %d \n",numPos,numNeg,numZero);
  printf("Fim do programa!\n");
  return 0;
}