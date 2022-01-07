/*
Exercicio 2 - Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma função 
que receba um vetor preenchido, teste e copie todos os valores negativos deste vetor para um 
novo vetor (sem deixar elementos vazios entre os valores copiados)
Autor: Leon Júnio Martins Ferreira
Data: 10/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
//definindo uma constante com o tamanho do vetor
#define MAX_VETOR 10

//procedimento de preenchimento do vetor
void preencherVetor(int vetorX[MAX_VETOR])
{
    printf("Preenchendo vetor \n");
    for (int i = 0; i < MAX_VETOR; i++)
    {
        printf("Digite o valor da %d posicao \n", (i + 1));
        scanf("%d%*c", &vetorX[i]);
    }
}

//função que retorna um ponteiro que aponta para os valores negativos obtidos dentro da função
int *gerarNegativos(int vetorX[MAX_VETOR])
{
    //declarando o vetor que vai receber os valores negativos
    int *vetorY = malloc(sizeof(int)*MAX_VETOR), ct = 0;
    for (int i = 0; i < MAX_VETOR; i++)
    {
        //verificando o vetor que foi recebido por parametro para saber quais sao os valores negativos
        if (vetorX[i] < 0)
        {
            vetorY[ct] = vetorX[i];
            ct++;
        }
    }
    //retornando os valores do apontador
    return vetorY;
}

//procedimento para exibir o vetor de negativos
void exibirVetor(int vetorX[MAX_VETOR])
{
    //salvando e chamando a função para retornar o array com numeros negativos
    int *vetorY = gerarNegativos(vetorX);
    for (int i = 0; i < MAX_VETOR; i++)
    {
        if (vetorY[i] < 0)
        {
            printf("O numero %d e negativo e ocupa a posicao %d do vetor \n", vetorY[i], i + 1);
        }
    }
}

int main(void)
{
    //declaração do vetor que vai receber os 10 numeros
    int vetorX[MAX_VETOR];
    //chamando procedimentos
    preencherVetor(vetorX);
    exibirVetor(vetorX);
    printf("Fim do programa");
    return 0;
}