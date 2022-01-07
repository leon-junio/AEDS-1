#include <stdio.h>
#include <stdbool.h> //importação da biblioteca de booleans
/*
Exercicio 7 - Verificar se um valor inteiro é positivo ou negativo 
dentro de uma função
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//verificar o inteiro
bool verificador(int n){
	//verificar e retornar um bool
    if(n>0){
      return true;
    }else if(n<0){
      return false;
    }else{
      return false;
    }
}

int main(void) {
  //variaveis
  int n = 0;
  bool status = false;
  //leitura dentro do laço de repetição
  printf("Verificar se um número é positivo ou negativo \n");
  do{
  printf("Digite o número ou 0 para finalizar:\n");
  scanf("%d%*c",&n);
  //se o numero for 0 o programa encerra
  if(n!=0){
  //chamada da função armazenando o resultado boolean em uma variavel
  status = verificador(n);
  //resultados
  if(status){
    printf("O número é positivo \n");
  }else{
    printf("O número é negativo \n");
  }
  }
  }while(n!=0);
  printf("FIM DO PROGRAMA \n");
  return 0;
}
