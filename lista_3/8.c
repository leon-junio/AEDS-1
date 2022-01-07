#include <stdio.h>
/*
Exercicio 8 - Criar uma função que receber um inteiro positivo e calcule uma formula
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//função para calcular a formula
float calculo(int n){
    //variavel
	float conta = 0;
    for(int i=1;i<=n;i++){
	//armazenando a conta em uma variavel
      conta += (float) ((i*i)+1)/(i+3);
    }
	//retorno da conta
    return conta;
}

int main(void) {
  //variaveis
  int n = 0;
  float result = 0;
  //leitura do inteiro
  printf("Realizar calculo matemático \n");
  printf("Digite um valor inteiro:\n");
  scanf("%d%*c",&n);
  //chamada da função
  result = calculo(n);
  //resultado do calculo
  printf("O valor da soma é : %.2f \n",result);
  printf("FIM DO PROGRAMA \n");
  return 0;
}
