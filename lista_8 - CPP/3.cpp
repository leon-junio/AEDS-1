/*
Exercicio 3 - Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente,
e-mail, número de horas de acesso, página (S-sim ou N-não). Elaborar um algoritmo
que calcule e mostre um relatório contendo o valor a pagar por cada cliente, sabendo-se
que as primeiras 20 horas de acesso é R$35,00 e as horas que excederam tem o custo de
R$2,50 por hora. Para os clientes que têm página, adicionar R$40,00. Inserir um conjunto de
registros (máximo 500).
Autor: Leon Júnio Martins Ferreira
Data: 28/11/2021
*/

#include <stdio.h>
#include <stdlib.h>
#define registros 500 //define o total de clientes que vao ser analisadas

typedef struct // Cria uma STRUCT para armazenar os dados de uma cliente e gerar um tipo para a mesma
{
    int codigo;
    char *email[100];
    int horas;
    char pagina;
} Cliente; // Define o nome do novo tipo criado

int main()
{
    Cliente clientes[registros]; //cria um vetor com o total de clientes desejadas
    float valor = 0;
    float horas = 0;
    printf("Cadastro de clientes para provedora de internet \n");
    printf("Digite o codigo do cliente, email, total de horas e se o mesmo tem pagina \n");
    //preenchendo vetor de clientes
    for (int i = 0; i < registros; i++)
    {
        Cliente c; //definir variavel para clientes que vai gerar novos cadastros
        printf("Digite o codigo do cliente %d :\n", i + 1);
        scanf("%d%*c", &c.codigo); //salvando o codigo
        printf("Digite o email do cliente :\n");
        scanf("%s%*c", &c.email); //salvando o email como string
        printf("Digite o total de horas de acesso a internet:\n");
        scanf("%d%*c", &c.horas); //salvando o valor
        printf("Cliente tem pagina ? S para sim e N para nao:\n");
        scanf("%s%*c", &c.pagina); //salvando o valor
        clientes[i] = c;
    }
    printf("Preco a ser pago por cada cliente:\n");
    for (int i = 0; i < registros; i++) //vetor que vai verificar as horas e realizar os calculos
    {
        if (clientes[i].horas <= 20)
        {
            valor += 35;
        }
        else
        {
            valor += 35;
            horas = (clientes[i].horas - 20);
            valor += (2.5 * horas);
        }
        if (clientes[i].pagina == 'S')
        {
            valor += 40;
        }
        //apresento na tela o nome e o telefone da loja
        printf("=======================================\n");
        printf("Email: %s \n", clientes[i].email);
        printf("Codigo: %d \n", clientes[i].codigo);
        printf("Total de horas: %d horas \n", clientes[i].horas);
        printf("Total a pagar: R$ %.2f \n", valor);
        printf("========================================\n");
        valor = 0;
        horas = 0;
        //realizar verificacoes e finalizar o sistema
    }
    printf("FIM DO PROGRAMA\n");
    return 0;
}
