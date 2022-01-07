/*
Exercicio 1 - Dados os seguintes campos de um registro:  nome, dia de aniversário e mês de aniversário, 
desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas 
que fazem aniversário, exibir também o dia. Considere um conjunto de 40 pessoas. 
Autor: Leon Júnio Martins Ferreira
Data: 28/11/2021
*/

#include <stdio.h>
#include <stdlib.h>
#define totalp 40 //define o total de pessoas que vao ser analisadas

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa e gera um tipo para a pessoa
{
    char *nome[100];
    int dia;
    int mes;
} Pessoa; // Define o nome do novo tipo criado

int main()
{
    Pessoa pessoas[totalp]; //cria um vetor com o total de pessoas desejadas
    printf("Aniversarios de pessoas \n");
    printf("Digite o nome, dia e mes do aniversarios de 40 pessoas \n");
    //preenchendo vetor de pessoas
    for (int i = 0; i < totalp; i++)
    {
        Pessoa p; //definir variavel para pessoas que vai gerar novos cadastros
        printf("Digite o nome da pessoa %d :\n", i + 1);
        scanf("%s%*c", &p.nome); //salvando o nome como string na estrutura
        printf("Digite o dia de nascimento:\n");
        scanf("%d%*c", &p.dia); //salvando o dia
        printf("Digite o numero do mes de nascimento:\n");
        scanf("%d%*c", &p.mes); //salvando o mes
        pessoas[i] = p;
    }
    for (int i = 1; i <= 12; i++) //vetor que percorre os 12 meses do ano
    {
        printf("Mes %d \n", i);
        printf("Aniversariantes do mes %d \n", i);
        for (int j = 0; j < totalp; j++) //vetor que percorre o total de pessoas definidas
        {
            if (pessoas[j].mes == i) //verifico o mes com o index que referencia o numero do mes
            {
                //apresento na tela o nome e dia do aniversariante
                printf("=======================================\n");
                printf("Nome: %s \n", pessoas[j].nome);
                printf("Dia: %d \n", pessoas[j].dia);
                printf("========================================\n");
            }
        }
        printf("--------------------------------------------\n");
    } //finalizo a execução do for e acaba o programa
    printf("FIM DO PROGRAMA\n");
    return 0;
}
