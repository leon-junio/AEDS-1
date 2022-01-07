#include <stdio.h>
/*
Exercicio 4 - Ler notas digitadas por alunos e conforme a nota dizer como foi o desempenho do mesmo
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/
int main(void) {
  //variaveis
  float nota = 0;
  //leitura
  printf("Calcular sua nota!\n");
  printf("Digite sua nota para calcular seu desempenho:\n");
  scanf("%f%*c",&nota);
  //processamento e saida
  if(nota>=8 && nota<=10){
      printf("Sua nota %.2f é otima!\n",nota);
  }else if(nota>=7 && nota<8){
      printf("Sua nota %.2f é boa!\n",nota);
  }else if(nota>=5 && nota<7){
      printf("Sua nota %.2f é regular!\n",nota);
  }else if(nota<5){
      printf("Sua nota %.2f é Insatisfatória!\n",nota);
  }
  printf("FIM DO PROGRAMA\n");
  return 0;
}