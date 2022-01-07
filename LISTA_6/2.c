/*
Exercicio 2 - Salvar um texto em um arquivo txt
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* arq;
    arq = fopen("texto.txt","w");
    char txt [30000];
    printf("Digite o texto:");
    gets(txt);
    fprintf(arq,"%s",txt);
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}