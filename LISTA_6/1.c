/*
Exercicio 1 - Salvar 10 numeros em um arquivo txt
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
int main(void){
    FILE* arq;
    //abri o arquivo
    arq = fopen("numeros.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(arq,"%d\n",i);
    }
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}