/*
Exercicio 4 - Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura 
inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de 
cada dia de janeiro em um vetor (de 31 posições)
Autor: Leon Júnio Martins Ferreira
Data: 10/11/2021
*/
#include <stdio.h>
#define MES 31
int main(void)
{
    //declaração das variaveis e do vetor de 31 dias
    float mes[MES], media = 0, maior = 15, menor = 40, soma = 0;
    int diasAbaixo = 0;
    for (int i = 0; i < MES; i++)
    {
        printf("DIGITE A TEMPERATURA DO DIA %d \n", i + 1);
        //scanneando as temperaturas
        scanf("%f%*c",&mes[i]);
        soma += mes[i];
        //verificando a maior e menor temperatura
        if (mes[i] > maior)
        {
            maior = mes[i];
        }
        if (mes[i] < menor)
        {
            menor = mes[i];
        }
    }
    //gerando a media
    media = (float)soma / MES;
    for (int i = 0; i < MES; i++)
    {
        if(mes[i]<media){
            //dias abaixo da media
            diasAbaixo++;
        }
    }
    //retornando os resultados para o user
    printf("RESULTADOS: \n");
    printf("A MENOR TEMPERATURA FOI DE: %.2f \n",menor);
    printf("A MAIOR TEMPERATURA FOI DE: %.2f \n",maior);
    printf("A MEDIA DAS TEMPERATURAS FOI DE: %.2f \n",media);
    printf("O TOTAL DE TEMPERATURAS ABAIXO DA MEDIA FOI DE: %d \n",diasAbaixo);
    printf("FIM DO PROGRAMA \n");
    return 0;
}