#include <stdio.h>
/*
Exercicio 3 - Criar um procedimento para receber 3 valores inteiros 
e retornar os mesmos em ordem crescente
Autor: Leon Júnio Martins Ferreira
Data: 20/09/2021
*/

//procedimento para reordenar os numeros
void reordenar(int num1,int num2,int num3){
   //variaveis
   int maior = 0,meio =0,menor =0; 
   printf("Ordem crescente \n");
   //cadeia de ifs para gerar o maior, menor e medio número.
   if(maior<num1){
     maior = num1;
   }
  if(maior<num3){
       maior = num3;
   }
   if(maior<num2){
       maior = num2;
  }
  if(maior==num1){
    if(meio<num2){
      meio=num2;
      menor = num3;
    }
    if(meio<num3){
      meio = num3;
      menor = num2;
    }
	//primeira tentativa de resultado possivel caso num1 seja o maior
    printf("%d - %d - %d \n",menor,meio,maior);
  }
  if(maior==num2){
    if(meio<num1){
      meio=num1;
      menor = num3;
    }
    if(meio<num3){
      meio = num3;
      menor = num1;
    }
	//primeira tentativa de resultado possivel caso num2 seja o maior
    printf("%d - %d - %d \n",menor,meio,maior);
  }
  if(maior==num3){
    if(meio<num2){
      meio=num2;
      menor = num1;
    }
    if(meio<num1){
      meio = num1;
      menor = num2;
    }
	//primeira tentativa de resultado possivel caso num3 seja o maior
    printf("%d - %d - %d \n",menor,meio,maior);
  }

}


int main(void) {
  //variaveis
  int n = 0;
  int num1 =0,num2=0,num3=0;
  //leitura de dados
  printf("Digite o 'n' número de pessoas da pesquisa:\n");
  scanf("%d%*c",&n);
  for(int i=0;i<n;i++){
  printf("Digite o 1º numero:\n");
  scanf("%d%*c",&num1);
  printf("Digite o 2º numero:\n");
  scanf("%d%*c",&num2);
  printf("Digite o 3º numero:\n");
  scanf("%d%*c",&num3);
  //chamada para reordenar os numeros digitados
  reordenar(num1,num2,num3);
  }
  printf("FIM DO PROGRAMA \n");
  return 0;
}
