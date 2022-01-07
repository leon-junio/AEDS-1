/*
Exercicio 6 - Mostrar divisores de um numero e salvar sua soma
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* arq;
    int soma = 0,num = 0;
    arq = fopen("somatotal.txt","w");
    printf("Digite o numero para ter seus divisores: \n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("Divisor %d \n",i);
            soma +=i;
        }
    }
    fprintf(arq,"%d",soma);
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}