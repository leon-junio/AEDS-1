/*
Exercicio 3 - Ler um txt e contar quantas vezes aparece a vogal A
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *arq;
    arq = fopen("texto.txt", "r");
    int count = 0;
    char c[30000];
    fgets(c, 30000, arq);
    puts(c);
    char vogais[] = "aA";
    int numVogais = 0, i, j;
    for (i = 0; c[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == c[i]) {
                numVogais++;
                break;
            }
        }
    }
    printf("A quantidade e %d \n", numVogais);
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}
