#include <stdio.h>
#include <stdlib.h>

#define MAX_LN 500
#define MAX_CL 500

int findMatriz(int matriz[MAX_LN][MAX_CL], int valor)
{
    int count = 0;
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            if (matriz[i][j] == valor)
            {
                count++;
            }
        }
    }
    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int matriz[MAX_LN][MAX_CL], valor = 0, result;
    for (int i = 0; i < MAX_LN; i++)
    {
        for (int j = 0; j < MAX_CL; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
    printf("Digite um valor para procurar na matriz: \n");
    scanf("%d%*c", &valor);
    result = findMatriz(matriz, valor);
    if (result > 0)
    {
        printf("Foram encontradas %d correspondencias. \n", result);
    }
    else
    {
        printf("Nao foram encontradas nenhuma correspondencia. \n", result);
    }
    return 0;
}