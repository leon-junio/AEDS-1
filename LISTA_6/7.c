/*
Exercicio 7 - Contar quantas vogais aparece dentro de um txt
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *arq;
    arq = fopen("charssave.txt","w");
    int count = 0;
    int n = 0;
    char c[30000];
    char let;
    char vogais[] = "aAeEiIoOuU";
    int numVogais = 0, i, j;
    printf("Digite a quantidade de letras que vai ser lida:");
    scanf("%d%*c",&n);
    printf("Digite as letras uma seguida da outra! \n");
    fgets(c,30000,stdin);
    fprintf(arq,"%s",c);
    for (i = 0; c[i] != '\0'; i++)
    {
        for (j = 0; vogais[j] != '\0'; j++)
        {
            if (vogais[j] == c[i])
            {
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
