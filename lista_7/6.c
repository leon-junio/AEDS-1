/*
Exercicio 6 - Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba 
uma matriz preenchida, calcule e retorne cada uma das somas a seguir
Autor: Leon Júnio Martins Ferreira
Data: 11/11/2021
*/
#include <stdio.h>
//definindo constantes de maximo de linhas e colunas
#define MAX_LN 4
#define MAX_CL 4

//procedimento para preencher uma matriz
void preencherMatriz(int matriz[MAX_LN][MAX_CL])
{
    printf("Preenchendo a matriz \n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //entrada do usuario para preencher a matriz
            printf("Digite o numero para ocupar a posicao [%d][%d] da matriz \n", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }

    //nesse ponto mostro a matriz preenchida anteriormente
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

//procedimento para realizar mostrar a diagonal principal e a soma dos números abaixo da mesma
void somaDiagPrincipal(int matriz[MAX_LN][MAX_CL])
{
    int soma = 0, ln = 1;
    //laço de repetição para somar os numeros abaixo da diagonal principal
    for (int i = 0; i < MAX_LN - 1; i++)
    {
        //defino que o j recebe sempre o valor da linha atual mais um, para variar corretamente entre as linhas e após isso entre as colunas
        for (int j = 1 + i; j < MAX_CL; j++)
        {
            soma += matriz[j][i];
        }
    }
    printf("Total da soma dos numeros abaixo da diagonal principal: %d \n", soma);
    //exibindo a diagonal principal
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //decisão da diagonal principal que é definida por indice de linha e coluna igual
            if (i == j)
            {
                printf("[%d]", matriz[i][j]);
            }
            else
            {
                printf("[ ]");
            }
        }
        printf("\n");
    }
}

int main(void)
{
    //declaração da matriz de numeros
    int matriz[MAX_LN][MAX_CL];
    //chamando os procedimentos 
    preencherMatriz(matriz);
    somaDiagPrincipal(matriz);
    printf("FIM DO PROGRAMA \n");
    return 0;
}