#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
//USO DE BIBLIOTECAS ESPECIAIS PARA CRIAR UMA CONVERSÃO/COMPARAÇÃO DE STRINGS

/*
Exercicio 4 - Criar um procedimento que receba 3 numeros e verifique se os mesmos
podem ser medidas de um triangulo, caso sim verifique o tipo de triangulo
Autor: Leon Júnio Martins Ferreira
Data: 23/09/2021
*/

//procedimento recebendo os possiveis lados do triangulo
void tipoTriangulo(float x,float y, float z){
    //verificar se os lados podem ser considerados para um triangulo
	if(x<(y+z)){
      if(y<(x+z)){
        if(z<(x+y)){
		//caso as condições para gerar um triangulo sejam verdadeiras
		//verificar qual é o tipo do triangulo abaixo
          if(x==z && z==y){
            printf("TRIANGULO EQUILÁTERO \n");
          }else if(x==z || y==z || x==y){
            printf("TRIANGULO ISÓSCELES \n");
          }else if(x!=z && y!=z && x!=y){
           printf("TRIANGULO ESCALENO \n");
          }
        }else{
	//print para quando os lados não são validos para gerar um triangulo
      printf("TRIANGULO INVALIDO \n");
    }
	//print para quando os lados não são validos para gerar um triangulo
      }else{
      printf("TRIANGULO INVALIDO \n");
    }
	//print para quando os lados não são validos para gerar um triangulo
    }else{
      printf("TRIANGULO INVALIDO \n");
    }
}

int main(void) {
  //variaveis
  int n = 0;
  char string[] = "0";
  float num1 =0,num2=0,num3=0;
  printf("Tipo do triângulo \n");
  //laço de repetição para receber N numeros para triangulos
  do{
  //leitura
  printf("Digite as medidas do triângulo ou 's' para sair:\n");
  printf("Digite a 1º medida:\n");
  //Salvar o numero ou letra digitada em uma string
  scanf("%s%*c",string);
  //forma de verificar se a string apresenta a condição de parada
  if(strcmp(string,"s")!=0){
	//comando atoi para transformar uma string em um float	
      num1 = atof(string);
  }
  //forma de verificar se a string apresenta a condição de parada
  if(strcmp(string,"s")!=0){
  printf("Digite a 2º medida:\n");
  scanf("%s%*c",string);
  if(strcmp(string,"s")!=0){
	//comando atoi para transformar uma string em um float	
      num2 = atof(string);
  }
  }
  //forma de verificar se a string apresenta a condição de parada
  if(strcmp(string,"s")!=0){
  printf("Digite a 3º medida:\n");
  scanf("%s%*c",string);
  if(strcmp(string,"s")!=0){
	//comando atoi para transformar uma string em um float	
      num3 = atof(string);
  }
  }
  //forma de verificar se a string apresenta a condição de parada
  if(strcmp(string,"s")!=0){
    tipoTriangulo(num1,num2,num3);
  }
  }while(strcmp(string,"s")!=0);
  printf("FIM DO PROGRAMA \n");
  return 0;
}
