/*
Exercicio 7 - Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para 
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as 
matrizes indicadas
Autor: Leon Júnio Martins Ferreira
Data: 11/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_LN 4
#define MAX_CL 6

//procedimento de preencher duas matrizes
void preencherMatriz(int matrizA[MAX_LN][MAX_CL], int matrizB[MAX_LN][MAX_CL])
{
    printf("Preenchendo a matriz A \n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //entrada dos dados da matriz A
            printf("Digite o numero para ocupar a posicao [%d][%d] da matriz A \n", i, j);
            scanf("%d%*c", &matrizA[i][j]);
        }
    }
    printf("Preenchendo a matriz B \n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
             //entrada dos dados da matriz B
            printf("Digite o numero para ocupar a posicao [%d][%d] da matriz B \n", i, j);
            scanf("%d%*c", &matrizB[i][j]);
        }
    }
    //exibindo as duas matrizes preenchidas dentro do procedimento
    exibirMatriz(matrizA);
    exibirMatriz(matrizB);
}
//procedimento usado para exibir uma matriz passada por parametro
void exibirMatriz(int matriz[MAX_LN][MAX_CL])
{
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
//função que retorna um apontador que aponta outro apontador no caso retornando uma matriz da soma entre a e b
int **somaMatrizes(int matrizA[MAX_LN][MAX_CL], int matrizB[MAX_LN][MAX_CL])
{
        //declaração da matriz que vai ser preenchida
    int **matrizS = (int **)malloc((sizeof(int) * (MAX_LN * MAX_CL)));
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //realizando calculo para preencher matriz
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    return matrizS;
}

//função que retorna um apontador que aponta outro apontador no caso retornando uma matriz da subtração entre a e b
int **subMatrizes(int matrizA[MAX_LN][MAX_CL], int matrizB[MAX_LN][MAX_CL])
{
    //declaração da matriz que vai ser preenchida
    int **matrizD = (int **)malloc((sizeof(int) * (MAX_LN * MAX_CL)));
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //realizando calculo para preencher matriz
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    return matrizD;
}

int main(void)
{
    //criando as matrizes
    int matrizA[MAX_LN][MAX_CL];
    int matrizB[MAX_LN][MAX_CL];
    //definindo as matrizes que vao ser recebidas por funções
    int **matrizS = (int **)malloc((sizeof(int) * (MAX_LN * MAX_CL)));
    int **matrizD = (int **)malloc((sizeof(int) * (MAX_LN * MAX_CL)));
    //preenchendo a matriz a e b por um procedimento
    preencherMatriz(matrizA, matrizB);
    printf("MATRIZ RESULTANTE DA SOMA ENTRE A E B: \n");
    //realizando a soma das matrizes por meio de uma função que retorna a matriz resultante
    matrizS = somaMatrizes(matrizA, matrizB);
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //imprimindo a nova matriz S
            printf("[%d]", matrizS[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ RESULTANTE DA SUBTRACAO ENTRE A E B: \n");
    //realizando a subtração das matrizes por meio de uma função que retorna a matriz resultante
    matrizD = subMatrizes(matrizA, matrizB);
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //imprimindo a nova matriz D
            printf("[%d]", matrizD[i][j]);
        }
        printf("\n");
    }
    //limpando os espaços destinados as matrizes S e D
    free(matrizS);
    free(matrizD);
    printf("FIM DO PROGRAMA \n");
    return 0;
}