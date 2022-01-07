#include <stdio.h>
/*
Exercicio 10 - Ler a velocidade maxima permitida numa avenida e a velocidade de um motorista e verificar se o mesmo esta dentro da lei ou não (aplicando multas)
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float velAvenida =0,velMotor=0;
  //leitura
  printf("Verificar se está no limite de velocidade! \n");
  printf("Digite a velocidade máxima da avenida:\n");
  scanf("%f%*c",&velAvenida);
   printf("Digite a velocidade do motorista na via:\n");
  scanf("%f%*c",&velMotor);
  //processamento dos dados e saida de resposta
  if(velMotor<=velAvenida){
    printf("Motorista respeitou a lei\n");
  }else if(velMotor>velAvenida){
    if((velMotor-velAvenida)<=10){
      printf("O valor a ser cobrado da multa é de R$ 50,00\n");
    }else if((velMotor-velAvenida)>=11 && (velMotor-velAvenida)<=30){
      printf("O valor a ser cobrado da multa é de R$ 100,00\n");
    }else if((velMotor-velAvenida)>30){
      printf("O valor a ser cobrado da multa é de R$ 200,00\n");
    }
  }
  printf("FIM DO PROGRAMA\n");
  return 0;
}