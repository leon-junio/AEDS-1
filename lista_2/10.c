#include <stdio.h>
/*
Exercicio 10 - Criar um sistema de eleição para contabilizar a quantidade de votos para cada candidato, votos nulos ou brancos
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  int cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,voto = 0;
  //leitura
  printf("SISTEMA DE VOTOS \n");
  printf("Para votar digite o código do voto de acordo com o seguinte:\n 1- Candidato 1 \n 2- Candidato 2\n 3- Candidato 3\n 4- Candidato 4\n 5- Voto nulo\n 6- Voto em branco\n 0- Encerrar contagem \n");
 do{
    printf("Digite o voto (1,2,3,4,5,6 ou 0-sair) \n");
    scanf("%d",&voto);
    //Contagem de votos por meio de uma cadeia de IF's
    if(voto==1){
      cand1++;
    }else if(voto==2){
      cand2++;
    }else if(voto==3){
      cand3++;
    }else if(voto==4){
      cand4++;
    }
    else if(voto==5){
      nulo++;
    }
    else if(voto==6){
      branco++;
    }
 }while(voto!=0);
  //resultados
  printf("RESULTADOS DA ELEIÇÃO \n");
  printf("Votos no candidato 1 -> %d \n",cand1);
  printf("Votos no candidato 2 -> %d \n",cand2);
  printf("Votos no candidato 3 -> %d \n",cand3);
  printf("Votos no candidato 4 -> %d \n",cand4);
  printf("Votos nulos -> %d \n",nulo);
  printf("Votos em branco -> %d \n",branco);
  printf("Fim do programa \n");
  return 0;
}