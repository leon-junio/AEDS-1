#include <stdio.h>
/*
Exercicio 10 - Criar uma função para retornar a categoria de um nadador
de acordo com sua idade
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//função para checar a idade e retornar a categoria
char idade(int idade){
	//condições para retornar a respectiva categoria
    if(idade>=5 && idade <=7){
      return 'F';
    }else if(idade>=8 && idade <=10){
      return 'E';
    }else if(idade>=11 && idade <=13){
      return 'D';
    }else if(idade>=14 && idade <=15){
      return 'C';
    }else if(idade>=16 && idade <=17){
      return 'B';
    }else if(idade>=18){
      return 'A';
    }else{
		//retornar N caso invalida a idade
      return 'N';
    }
}

int main(void) {
  //variaveis
  int n = 0;
  char cat = 0;
  //leitura de dados
  printf("Categoria dos nadadores \n");
  printf("Digite a idade do nadador:\n");
  scanf("%d%*c",&n);
  //função que retorna a categoria do nadador
  cat = idade(n);
  //resultados
  if(cat!='N'){
  printf("A categória do nadador é a %c \n",cat);
  }else{
    printf("Idade invalida! \n");
  }
  printf("FIM DO PROGRAMA \n");
  return 0;
}
