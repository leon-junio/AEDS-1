#include <stdio.h>
/*
Exercicio 5 - Realizar uma pesquisa para uma prefeitura que retorne 
a media de salarios, maior salario, media de filhos e percentual de salarios ate 100 reais
da sua população.
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  float salario = 0,totalSalarios,somaSalarios = 0,maiorSal = 0,num100 =0;
  int filhos = 0,totalFilhos = 0,somaFilhos = 0;
  //leitura
  do{
    printf("Digite o valor númerico do salario: \n");
    scanf("%f%*c",&salario);
    if(salario>0){ //IF PARA TRAVAR A INSERÇÃO DE DADOS QUANDO SALARIO FOR NEGATIVO
    printf("Digite o número de filhos: \n");
    scanf("%d%*c",&filhos);
    somaSalarios+=salario;
    totalSalarios++;
    somaFilhos+=filhos;
    totalFilhos++;
    if(maiorSal<salario){
      maiorSal = salario;
    }
    if(salario<=100){
      num100++;
    }
    }
  }
  while(salario>=0);
  printf("Resultados: \n");
  //processamento dos dados e resultados
  printf("A média de salario da população é de: %.2f \n",((float)somaSalarios/totalSalarios));
  printf("A média de numero de filhos da população é de: %.2f \n",((float)somaFilhos/totalFilhos));
  printf("O maior salario é de: %.2f \n",maiorSal);
  printf("O percentual de pessoas com salario ate 100 reais é de: %.2f \n",((float)(num100*100)/totalSalarios));
  printf("Fim do programa.\n");
  return 0;
}