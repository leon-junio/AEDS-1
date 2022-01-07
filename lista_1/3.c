#include <stdio.h>
/*
Exercicio 3 - Ler o ano de nascimento de uma pessoa e calcular sua idade com base no ano atual
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  char escolha = 0;
  int aniversario = 0,soma=0;
  //leitura
  printf("Calcular sua idade!\n");
  printf("Você ja fez aniversario esse ano ?\n Digite s(sim) ou n(não)\n");
  scanf("%c%*c",&escolha);
  printf("Digite o ano de seu aniversário\n");
  scanf("%d%*c",&aniversario);
  //processamento e saida
  if(escolha=='s'){
    soma = 2021-aniversario;
  }else if(escolha == 'n'){
    soma = 2021-aniversario;
    soma -= 1;
  }
  //resultado
  if(soma>=18){
    printf("Você tem idade para conseguir a carteira de habilitação \n");
  }
  printf("Sua idade é de %d anos\n",soma);
  printf("FIM DO PROGRAMA\n");
  return 0;
}