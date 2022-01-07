/*
Exercicio 9 - Salvar dados de alunos dentro de um arquivo de texto
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *arq;
    arq = fopen("alunos.txt","w");
    int count = 0;
    int n = 0, i = 0;
    char mat[30000];
    char tel[30000];
    char txt[30000];
    printf("Digite a quantidade de alunos que vai ser lida:\n");
    scanf("%d%*c", &n);
    fprintf(arq, "%s", "ALUNOS \n");
    while (i != n)
    {
        printf("Digite a matricula:\n");
        fgets(mat, 30000, stdin);
        fprintf(arq, "%s", mat);
        printf("Digite o telefone:\n");
        fgets(tel, 30000, stdin);
        fprintf(arq, "%s", tel);
        i++;
    }
    printf("Deseja ler o arquivo de alunos ? 1-sim 0-nao \n");
    scanf("%d",&n);
    if (n == 1)
    {
        while (fgets(txt, 30000,arq) > 0)
        {
            puts(txt);
        }
    }
    else
    {
        printf("FINALIZANDO PROGRAMA");
    }
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}
