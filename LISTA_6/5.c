
/*
Exercicio 5 - Concatenar dois arquivos txt
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* arq1;
    FILE* arq2;
    FILE* juntos;
    arq1 = fopen("texto.txt","r");
    arq2 = fopen("linha.txt","r");
    juntos = fopen("concatenados.txt","w");
    char str[30000];
    while(fgets(str,30000,arq1)>0){
        fprintf(juntos,"%s",str);
    }
    fprintf(juntos,"%s","\n");
    while(fgets(str,30000,arq2)>0){
        fprintf(juntos,"%s",str);
    }
    fclose(arq1);
    fclose(arq2);
    fclose(juntos);
    printf("FIM DE PROGRAMA");
    return 0;
}