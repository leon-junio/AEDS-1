#include <stdio.h>
/*
Exercicio 3 - Ler 10 números e checar se são divisiveis por 3 e 9 ou por 2 ou 5.
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int numLido = 0;
  int num39 = 0,num2 = 0, num5 = 0;
  float perPos = 0, perNeg = 0, perZero = 0;
  
  printf("Leitura de 10 números\n");
  //leitura
   //Processamento do total de números em uma repetição
   for(int i=0;i<10;i++){
      printf("Digite o número %d de 10:\n",(i+1));
      scanf("%d%*c",&numLido);
    //verificações
   if((numLido%3) == 0 && (numLido%9) == 0 ){
     printf("O número %d é divisivel por 3 e 9 .\n",numLido);
     num39++;
     //Mais verificações internas para casos de numeros com mais de uma possibilidade de divisão. Ex:90;
    //Usando o resto da divisao igual a zero para saber se um numero divide outro corretamente
	if((numLido%2) == 0){
     printf("O número %d é divisivel por 2 .\n",numLido);
     num2++;
   }
   if((numLido%5) == 0){
     printf("O número %d é divisivel por 5 .\n",numLido);
     num5++;
   }
   }else if((numLido%2) == 0){
     printf("O número %d é divisivel por 2 .\n",numLido);
     num2++;
     if((numLido%5) == 0){
     printf("O número %d é divisivel por 5 .\n",numLido);
     }
   }else if((numLido%5) == 0){
     printf("O número %d é divisivel por 5 .\n",numLido);
     num5++;
   }else{
     printf("Número não é divisível pelos valores. \n");
   }
   }
   //resultados
  printf("Resultados da quantidade de números:\n");
  printf(" O total de números divisiveis por 3 e 9 foi de: %d \n O total de números divisiveis por 2 foi de: %d\n O total de números divisiveis por 5 foi de: %d \n",num39,num2,num5);
  printf("Fim do programa.\n");
  return 0;
}