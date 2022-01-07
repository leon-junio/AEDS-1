#include <stdio.h>
/*
Exercicio 6 - Receber um parametro N e retornar o valor de um calculo matematico
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//função para calcular a soma dos termos e seus fatoriais
float calculo(int n){
    //variaveis
	float conta = 1;
    int fat = 1;
    for(int i=1;i<=n;i++){
	//calcular fatorial
      for(int j=1;j<=i;j++){
        fat = fat * j;
      }
      conta += (float) 1/fat;
      fat =  1;
    }
	//retorno do resultado da conta
    return conta;
}

int main(void) {
  //variaveis
  int n = 0;
  float result=0;
  //leitura
  printf("calculo de soma \n");
  printf("Digite o termo N:\n");
  scanf("%d%*c",&n);
  //chamada da funçao armazenando o resultado da mesma na variavel
  result = calculo(n);
  //resultados
  printf("O resultado da soma é: %f\n",result);
  printf("FIM DO PROGRAMA \n");
  return 0;
}
