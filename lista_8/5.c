/*
Exercicio 5 - Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
são: nome, endereço e telefone. Deve ser usada uma estrutura de registro para a construção
deste cadastro.
Autor: Leon Júnio Martins Ferreira
Data: 28/11/2021
*/

#include <stdio.h>
#include <stdlib.h>
#define registros 2 //define o total de clientes que vao ser analisadas

typedef struct // Cria uma STRUCT para armazenar os dados de uma cliente e gerar um tipo para a mesma
{
    char *nome[250];
    char *endereco[2250];
    char *telefone[18];
} Cliente; // Define o nome do novo tipo criado

int main()
{
    Cliente clientes[registros]; //cria um vetor com o total de clientes desejadas
    printf("Cadastro de clientes para loja \n");
    printf("Digite o nome do cliente, endereco e o telefone \n");
    //preenchendo vetor de clientes
    for (int i = 0; i < registros; i++)
    {
        Cliente c; //definir variavel para clientes que vai gerar novos cadastros
        printf("Digite o nome do cliente %d :\n", i + 1);
        scanf("%s%*c", &c.nome); //salvando o nome como string na estrutura
        printf("Digite o endereco: \n");
        scanf("%s%*c", &c.endereco); //salvando o endereco como string
        printf("Digite o telefone (XX) XXXXX-XXXX :\n");
        scanf("%s%*c", &c.telefone); //salvando o telefone como string
        clientes[i] = c;
    }
    printf("CLIENTES:\n");
    for (int i = 0; i < registros; i++) //vetor que vai verificar os clientes
    {
        printf("=======================================\n");
        printf("Nome: %s \n", clientes[i].nome);
        printf("Endereco: %s \n", clientes[i].endereco);
        printf("Telefone: %d \n", clientes[i].telefone);
        printf("========================================\n");
        //realizar verificacoes e finalizar o sistema
    }
    printf("FIM DO PROGRAMA\n");
    return 0;
}
