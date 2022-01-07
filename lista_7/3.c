/*
Exercicio 3 - Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando 
as posições de 0 a 9 em cada vetor). Faça um outro procedimento que receba dois vetores 
preenchidos  e  gera  um  novo  vetor  com  os  elementos  desses  2  vetores  intercalados  de  tal 
forma que nas posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas 
posições pares os elementos do segundo vetor recebido por parâmetro. Faça um 
procedimento  que  receba  e  exiba  o  conteúdo  de  um  vetor.  
Autor: Leon Júnio Martins Ferreira
Data: 10/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
//declarando constante que dita o valor maximo do tamanho dos vetores
#define MAX_VETOR 10

//procedimento para preencher vetores
void preencherVetores(int vetorX[MAX_VETOR],int vetorY[MAX_VETOR])
{
    printf("Preenchendo os vetores \n");
    for (int i = 0; i < MAX_VETOR; i++)
    {
        //entrada de dados do teclado para preenchimento dos vetores
        printf("Digite o valor da %d posicao no vetor X\n", (i + 1));
        scanf("%d%*c", &vetorX[i]);
    }
        for (int i = 0; i < MAX_VETOR; i++)
    {
        printf("Digite o valor da %d posicao no vetor Y\n", (i + 1));
        scanf("%d%*c", &vetorY[i]);
    }
}

//procedimento que recebe os vetores como parametro e gera um novo vetor
void gerarNovoVetor(int vetorX[MAX_VETOR],int vetorY[MAX_VETOR])
{
    //armazenando os vetores e preparando para acessar seus dados
    int *PtrvetorY = malloc(sizeof(int)*MAX_VETOR), ct = 1;
    int *PtrvetorX = malloc(sizeof(int)*MAX_VETOR);
    PtrvetorY = vetorY;
    PtrvetorX = vetorX;
    //definindo que o vetor Z tem tamanho de duas vezes o maximo
    int vetorZ [MAX_VETOR*2];
    for (int i = 0; i < MAX_VETOR; i++)
    {
        vetorZ[ct] = PtrvetorX [i];
        //variação para numeros pares
        ct+=2;
    }
    ct = 0;
    for (int i = 0; i < MAX_VETOR; i++)
    {
        vetorZ[ct] = PtrvetorY [i];
        //variacao para numeros impares
        ct+=2;
    }
    //chamando procedimento de exibir o vetor
    exibirVetor(vetorZ);
}
//procedimento de exibir o vetor
void exibirVetor(int vetorZ[MAX_VETOR])
{
    int *vetorZnovo = malloc(sizeof(int)*(MAX_VETOR*2));
    vetorZnovo = vetorZ;
    for (int i = 0; i < MAX_VETOR*2; i++)
    {
        printf("Numero %d e ocupa a posicao %d do vetor \n", vetorZnovo[i], i);
    }
}

int main(void)
{
    //declarando os vetores
    int vetorX[MAX_VETOR];
    int vetorY[MAX_VETOR];
    //chamando os procedimentos
    preencherVetores(vetorX,vetorY);
    gerarNovoVetor(vetorX,vetorY);
    printf("Fim do programa");
    return 0;
}