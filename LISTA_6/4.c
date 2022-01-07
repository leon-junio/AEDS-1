/*
Exercicio 4 - Mostrar as linhas de um TXT e apresentar quantas linhas tem ao todo
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* arq;
    arq = fopen("linha.txt","r");
    int count = 0;
    char str[30000];
    while(fgets(str,30000,arq)>0){
       puts(str);
       count++;
    }
    fclose(arq);
    printf("%d Linhas ao todo! \n",count);
    printf("FIM DE PROGRAMA");
    return 0;
}