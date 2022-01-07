#include <stdio.h>
/*
Exercicio 1 - Criar um procedimento para receber 3 notas de um aluno e uma letra e desta forma
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/

//procedimento para calcular media com os parametros passados
void calcularMedia(float nota1,float nota2,float nota3, char letra){
  float result = 0;
  if(letra=='A'){
    result = (float)(nota1+nota2+nota3)/3;
  }else if(letra=='P'){
    //calculo de media com pesos
	result = (float)((nota1*5)+(nota2*3)+(nota3*2))/(nota1+nota2+nota3);
  }
  //resultados obtidos
  printf("A média foi de : %.2f\n",result);
}


int main(void) {
//variaveis
  int n = 0;
  float nota1=0,nota2=0,nota3=0,result=0;
  char letra = 0;
  //leitura
  printf("Digite o 'n' número de alunos:\n");
  scanf("%d%*c",&n);
  for(int i=0;i<n;i++){
    printf("Digite sua nota nº 1:\n");
    scanf("%f%*c",&nota1);
    printf("Digite sua nota nº 2:\n");
    scanf("%f%*c",&nota2);
    printf("Digite sua nota nº 3:\n");
    scanf("%f%*c",&nota3);
    printf("Digite 'P' para média ponderada \nDigite 'A' para média aritmética:\n");
    scanf("%c%*c",&letra);
	//chamada de procedimento com parametros imbutidos
    calcularMedia(nota1,nota2,nota3,letra);
  }
	printf("FIM DO PROGRAMA \n");
  return 0;
}
