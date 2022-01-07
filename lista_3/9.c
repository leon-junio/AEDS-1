#include <stdio.h>
/*
Exercicio 9 - Criar uma função para ler N notas e retornar a media daquelas
com nota maior ou igual a 6
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//função para calcular a media
float calculoMedia(int n){
    //variaveis
	float conta = 0,total = 0,nota=0,result = 0;
    //loop para leitura das notas
	for(int i=1;i<=n;i++){
      printf("Digite a nota:\n");
      scanf("%f%*c",&nota);
	  //checagem se a nota é uma aprovação
      if(nota>=6){
        conta += nota;
        total ++;
      }
    }
	//calculo da media
    if(total!=0){
    result = (float)conta/total;
    }else{
      result = 0;
    }
	//retorno da media ou valor 0 caso sem alunos aprovados
    return result;
}

int main(void) {
  //variaveis
  int n = 0;
  float result = 0;
  //leitura de quantos alunos vão ser
  printf("Calculo de media de notas de alunos \n");
  printf("Digite o número total de alunos:\n");
  scanf("%d%*c",&n);
  //chamada da função
  result = calculoMedia(n);
  //resultados
  if(result!=0){
  printf("O valor da média dos alunos aprovados é : %.2f \n",result);
  }else{
    printf("Não teve alunos aprovados! \n");
  }
  printf("FIM DO PROGRAMA \n");
  return 0;
}
