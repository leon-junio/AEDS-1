/*
Exercicio 2 - Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço 
de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos 
preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava 
abaixo da média. 
Autor: Leon Júnio Martins Ferreira
Data: 28/11/2021
*/

#include <stdio.h>
#include <stdlib.h>
#define registros 15 //define o total de registrps que vao ser analisadas

typedef struct // Cria uma STRUCT para armazenar os dados de uma loja e gerar um tipo para a mesma
{
    char *nome[100];
    char *telefone[18];
    float preco;
} Loja; // Define o nome do novo tipo criado

int main()
{
    Loja lojas[registros]; //cria um vetor com o total de lojas desejadas
    float soma = 0,media = 0;
    printf("Cadastro de lojas e preços de um eletrodomestico \n");
    printf("Digite o nome da loja, telefone (XX) XXXXX-XXXX e o preco do eletrodomestico \n");
    //preenchendo vetor de lojas
    for (int i = 0; i < registros; i++)
    {
        Loja l; //definir variavel para lojas que vai gerar novos cadastros
        printf("Digite o nome da loja %d :\n", i + 1);
        scanf("%s%*c", &l.nome); //salvando o nome como string na estrutura
        printf("Digite o telefone (XX) XXXXX-XXXX :\n");
        scanf("%s%*c", &l.telefone); //salvando o telefone como string
        printf("Digite o preco do eletrodomestico:\n");
        scanf("%f%*c", &l.preco); //salvando o valor
        lojas[i] = l;
        soma += l.preco;
    }
    //calculo de media dos preços
    media = soma/registros;
    printf("A media dos precos foi de %2.f :\n",media); //exibir media
    printf("Lojas com preco abaixo da media:\n");
    for (int i = 0; i < registros; i++) //vetor que vai verificar as lojas abaixo da media dos precos
    {
        if (lojas[i].preco <= media) //verificando o preco em contraste da media
        {
            //apresento na tela o nome e o telefone da loja
            printf("=======================================\n");
            printf("Nome da loja: %s \n", lojas[i].nome);
            printf("Telefone: %d \n", lojas[i].telefone);
            printf("========================================\n");
        }
        //realizar verificacoes e finalizar o sistema
    }                                   
    printf("FIM DO PROGRAMA\n");
    return 0;
}
