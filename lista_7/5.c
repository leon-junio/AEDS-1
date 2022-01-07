/*
Exercicio 5 - Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba 
uma matriz preenchida, calcule e retorne cada uma das somas a seguir
Autor: Leon Júnio Martins Ferreira
Data: 10/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
//definimento de constantes
#define MAX_LN 5
#define MAX_CL 5

//procedimento para preencher a matriz
void preencherMatriz(int matriz[MAX_LN][MAX_CL])
{
    printf("Preenchendo a matriz \n");
    //for duplo para acessar tanto linha quanto coluna
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            printf("Digite o numero para ocupar a posicao [%d][%d] da matriz \n", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
    //exibindo a matriz preenchida

    printf("MATRIZ GERADA \n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}

//retorno da soma da linha 4
int somaLinha4(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0;
    for (int i = 0; i < MAX_CL; i++)
    {
        soma += matriz[1][i];
    }
    return soma;
}

//retorno da soma da lcoluna 2
int somaCol2(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0;
    for (int i = 0; i < MAX_CL; i++)
    {
        soma += matriz[i][2];
    }
    return soma;
}

//retorno da soma da diagonal principal
int somaDiagPrincipal(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0;
    for (int i = 0; i < MAX_CL; i++)
    {
        soma += matriz[i][i];
    }
    return soma;
}

//retorno da soma da diagonal secundaria
int somaDiagSecundaria(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0, cl = MAX_CL-1;
    for (int i = 0; i < MAX_LN; i++)
    {
        soma += matriz[i][cl];
        cl--;
    }
    return soma;
}

//retorno da soma total
int somaTotal(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0;
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            soma+=matriz[i][j];
        }
    }
    return soma;
}

int main(void)
{
    //declaracao da matriz
    int matriz[MAX_LN][MAX_CL];
    preencherMatriz(matriz);
    //resultados das funções de calculo de somas
    printf("SOMA LINHA 4: %d \n", somaLinha4(matriz));
    printf("SOMA COLUNA 2: %d \n", somaCol2(matriz));
    printf("SOMA DIAGONAL PRINCIPAL: %d \n", somaDiagPrincipal(matriz));
    printf("SOMA DIAGONAL SECUNDARIA: %d \n", somaDiagSecundaria(matriz));
    printf("SOMA TOTAL: %d \n", somaTotal(matriz));
    printf("FIM DO PROGRAMA \n");
    return 0;
}