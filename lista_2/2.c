#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
/*
Exercicio 2 - Ler uma sequencia de valores inteiros e retornar o valor do percentual quantos numeros são positivos, negativos e zeros em relação ao total de números lidos.
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int totalNum = 0;
  char string[] = "0";
  int numLido = 0;
  int numPos = 0,numNeg = 0,numZero = 0;
  float perPos = 0.0, perNeg = 0.0, perZero = 0.0;
  printf("Leitura de números inteiros \n");
   do{
      printf("Digite um número inteiro para ocupar a posição %d:\nOu digite 'f' para sair do programa! \n",(totalNum));
      scanf("%s%*c",string);
    //verificações
	//comando strcmp para verificar se uma string é igual a outra, caso seja retorna o valor 0
    if(strcmp(string,"f")!=0){
	//comando atoi para transformar uma string em um inteiro	
      numLido = atoi(string);
   if(numLido>0){
     numPos++;
   }else if(numLido<0){
     numNeg++;
   }else if(numLido==0){
     numZero++;
   }
   }
   }while(strcmp(string,"f")!=0);
    //calcular percentual e total de numeros
  totalNum = numPos+numNeg+numZero;
  perPos = (float) (numPos*100)/totalNum;
  perNeg = (float) (numNeg*100)/totalNum;
  perZero = (float) (numZero*100)/totalNum;
   //resultados
  printf("Resultados:\n");
  printf(" O percentual de números positivos foi: %f \n O percentual de números negativos foi: %f\n O percentual de números zeros foi: %f \n",perPos,perNeg,perZero);
  printf("Fim do programa!\n");
  return 0;
}