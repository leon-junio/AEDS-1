#include <stdio.h>
/*
Exercicio 8 - Calcular novo salario do funcionario com base em um menu de opções
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  char opcao = 0;
  float salario =0;
  //leitura
  printf("Bonus Salarial!! \n");
  printf("Digite seu salario:\n");
  scanf("%f%*c",&salario);
  printf("Escolha uma opção:\n A- Aumentar 8%% no salario/n B- Aumentar 11%% no salario\n C- Aumento fixo no salario\n");
  scanf("%c%*c",&opcao);
  //processamento da opção e calculo dos salarios
  switch(opcao){
    case 'A': 
    salario += salario*0.08;
    break;
    case 'B': 
    salario += salario*0.11;
    break;
    case 'C': 
    if(salario<=1000){
      salario+=350;
    }else if(salario>1000){
       salario+=200;
    }
    break;
    default: 
    printf("Opção invalida \n");
    break;
  }
  //resultados
  printf("Seu salario com bonus é R$ %2.f\n",salario);
  printf("FIM DO PROGRAMA\n");
  return 0;
}