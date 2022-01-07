/*
Exercicio 8 - Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros 
procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir 
(um procedimento para cada uma delas) e exiba a matriz resultante da troca
Autor: Leon Júnio Martins Ferreira
Data: 11/11/2021
*/
#include <stdio.h>
//definindo constante de numero maximo tanto de linha quanto de coluna
#define MAX_LN 10
#define MAX_CL 10

//preenchendo a matriz com os 100 numeros
void preencherMatriz(int matriz[MAX_LN][MAX_CL])
{
    printf("Preenchendo a matriz \n");
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            //entrada de um inteiro do usuario
            printf("Digite o numero para ocupar a posicao [%d][%d] da matriz \n", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }

    //exibindo a matriz gerada para ter um aviso visual do que foi salvo
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

//procedimento que exibi uma matriz recebida por parametro
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

//procedimento de troca da linha 2 pela 8
void troca2to8(int matriz[MAX_LN][MAX_CL])
{
    //definindo um vetor auxiliar para salvar uma linha sem perde-la
    int aux[MAX_LN];
    for (int i = 0; i < MAX_CL; i++)
    {
        //salvando a linha 2 no vetor
        aux[i] = matriz[1][i];
        //alterando a linha 2 pela linha 8
        matriz[1][i] = matriz[7][i];
    }
    for (int i = 0; i < MAX_LN; i++)
    {
        //alterando a linha 8 pelos numeros da linha 2 armazenados no vetor auxiliar
        matriz[7][i] = aux[i];
    }
    printf("Trocando a linha 2 com a 8 \n");
    //exibindo a matriz gerada dessa alteração
    exibirMatriz(matriz);
}

//procedimento de troca da coluna 4 pela 10
void trocaCol4to10(int matriz[MAX_LN][MAX_CL])
{
    //definindo um vetor auxiliar para salvar uma coluna sem perde-la
    int aux[MAX_CL];
    for (int i = 0; i < MAX_LN; i++)
    {
        //salvando a coluna 4 no vetor
        aux[i] = matriz[i][3];
        //alterando a coluna 4 pela coluna 10
        matriz[i][3] = matriz[i][9];
    }
    for (int i = 0; i < MAX_CL; i++)
    {
         //alterando a coluna 10 pelos numeros da coluna 4 armazenados no vetor auxiliar
        matriz[i][9] = aux[i];
    }
    printf("Trocando a coluna 4 com a 10 \n");
    //exibindo a matriz resultante deste processo
    exibirMatriz(matriz);
}

void trocaDiagonais(int matriz[MAX_LN][MAX_CL])
{
    //definindo um vetor auxiliar para salvar uma diagonal completa e um numeros a menos que o total maximo do indice de colunas
    int auxp[MAX_CL], cl = MAX_CL - 1;
    for (int i = 0; i < MAX_CL; i++)
    {
        //salvando a diagonal principal no vetor auxiliar
        auxp[i] = matriz[i][i];
        //trocando a diagonal principal com a diagonal secundaria
        matriz[i][i] = matriz[i][cl];
        cl--;
    }
    cl = MAX_CL - 1;
    for (int i = 0; i < MAX_LN; i++)
    {
        //alterando a diagonal secundaria com os numeros da diagonal principal armazenados no vetor auxiliar
        matriz[i][cl] = auxp[i];
        cl--;
    }
    printf("Trocando as diagonais \n");
       //exibindo a matriz resultante deste processo
    exibirMatriz(matriz);
}

void troca5to10(int matriz[MAX_LN][MAX_CL])
{
    //definindo um vetor auxiliar para salvar uma linha sem perde-la
    int aux[MAX_LN];
    for (int i = 0; i < MAX_CL; i++)
    {
        //salvando a linha 5 no vetor auxiliar 
        aux[i] = matriz[4][i];
        //alterando a linha 5 pela coluna 10
        matriz[4][i] = matriz[i][9];
    }
    for (int i = 0; i < MAX_LN; i++)
    {
        //alterando a coluna 10 pelos numeros da linha 5 armazenados no vetor auxiliar
        matriz[i][9] = aux[i];
    }
    printf("Trocando a linha 5 com a coluna 10 \n");
       //exibindo a matriz resultante deste processo
    exibirMatriz(matriz);
}

int main(void)
{
    //declaração da matriz de 100 numeros
    int matriz[MAX_LN][MAX_CL];
    //chamando os procedimentos solicitados para preencher e realizar as devidas trocas dentro da matriz
    preencherMatriz(matriz);
    troca2to8(matriz);
    trocaCol4to10(matriz);
    trocaDiagonais(matriz);
    troca5to10(matriz);
    printf("FIM DO PROGRAMA \n");
    return 0;
}