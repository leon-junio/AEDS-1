/*
Exercicio 8 - Faça  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba  estes  3  valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o  segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes
Data: 22/10/2021
*/
#include <stdio.h>
void calcCircunferencia (float R, float *compr, float *area) {
  //salvar calculos em ponteiro
  *compr = 2*3.1415*R;
  *area = 3.1415*(R*R);
}
int main ()  
{  
      float r=0,comp=0,area=0;
      printf("Digite o raio \n");   
      scanf("%f",&r);      
      float *compr2,*area2;
      compr2 = &comp;
      area2 = &area;
      //calculo via funcao
      calcCircunferencia(r,compr2,area2); 
      //saida 
      printf("%f %f \n",*compr2,*area2);
      return 0; 
}  