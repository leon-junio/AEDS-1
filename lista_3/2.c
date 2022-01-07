#include <stdio.h>
/*
Exercicio 2 - Calcular a media salarial de uma parte de uma população de 
uma cidade a pedido da prefeitura, juntamente com a quantidade de filhos
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/

//procedimento de calculo de media
void calcularSalario(){
  //variaveis
  float result = 0,salario = 0,soma=0;
  int filhos = 0,n=0;
  printf("Digite o 'n' número de pessoas da pesquisa:\n");
  scanf("%d%*c",&n);
  //leitura dos dados
  for(int i=0;i<n;i++){
  printf("Digite o total do seu salario:\n");
  scanf("%f%*c",&salario);
  printf("Digite o numero total de filhos:\n");
  scanf("%d%*c",&filhos);
  soma+=salario;
  }
  //resultados obtidos
  result = (float)soma/n;
  printf("A média salarial da população é de: %.2f",result);
}

int main(void) {
//chamada do procedimento
  calcularSalario();
  printf("FIM DO PROGRAMA \n");
  return 0;
}
