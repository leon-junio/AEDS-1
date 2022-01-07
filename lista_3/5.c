#include <stdio.h>
/*
Exercicio 5 - Receber uma media final do aluno e escrever seu conceito
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//Procedimento conceituador da media
void conceituador(float media){
    //condições para verificar a nota e escrever o conceito
	if(media<=39){
      printf("CONCEITO: F \n");
    }else if(media >= 40 && media <= 59){
      printf("CONCEITO: E \n");
    }else if(media >= 60 && media <= 69){
      printf("CONCEITO: D \n");
    }else if(media >= 70 && media <= 79){
      printf("CONCEITO: C \n");
    }else if(media >= 80 && media <= 89){
     printf("CONCEITO: B \n");
    }else if(media >= 90){
     printf("CONCEITO: A \n");
    }
}

int main(void) {
  //variaveis
  int n = 0;
  float media = 0;
  //leitura dos dados
  printf("Medias do alunos e seus conceitos \n");
  printf("Digite o total de alunos:\n");
  scanf("%d%*c",&n);
  //laço para entrada das medias
  for (int i=0;i<n;i++){
    printf("Digite a sua média:\n");
    scanf("%f%*c",&media);
	//chamada do procedimento de conceitos
    conceituador(media);
  }
  printf("FIM DO PROGRAMA \n");
  return 0;
}
