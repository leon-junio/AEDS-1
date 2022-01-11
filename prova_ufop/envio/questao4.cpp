#include <stdio.h>
#include <stdlib.h>

#define TOTAL 10

typedef struct Categoria
{
    int codigo;
    char *nome[40];
} categoria;

typedef struct Produto
{
    int codigo, filial, estoque;
    char *nome[60];
    categoria cat;
    float valor_venda, valor_custo;
    char *vencimento[12];
    char *fabricacao[12];
} produto;

int main()
{
    float preco_venda = 0, preco_custo = 0, media_itens = 0;
    produto *produtos = NULL;
    produtos = (produto *)malloc(TOTAL * sizeof(produto));
    printf("Cadastre os 50 produtos: \n");
    for (int i = 0; i < TOTAL; i++)
    {
        printf("Digite o codigo: \n");
        scanf("%d%*c", produtos[i].codigo);
        printf("Digite o nome: \n");
        fgets(produtos[i].nome, 60, stdin);
        categoria cat;
        printf("Digite o codigo da categoria: \n");
        scanf("%d%*c", cat.codigo);
        printf("Digite o nome da categoria: \n");
        fgets(cat.nome, 60, stdin);
        produtos[i].cat = cat;
        printf("Digite o valor de venda: \n");
        scanf("%d%*c", produtos[i].valor_venda);
        printf("Digite o valor de custo: \n");
        scanf("%d%*c", produtos[i].valor_custo);
        printf("Digite a data de vencimento (dd-mm-aaaa): \n");
        fgets(produtos[i].vencimento, 12, stdin);
        printf("Digite a data de fabricacao (dd-mm-aaaa): \n");
        fgets(produtos[i].fabricacao, 12, stdin);
        printf("Digite o total de itens no estoque: \n");
        scanf("%d%*c", produtos[i].estoque);
    }

    for (int i = 0; i < TOTAL; i++)
    {
        preco_venda += produtos[i].valor_venda;
    }
    printf("O total da media de precos de venda %.2f \n", (preco_venda / TOTAL));

    for (int i = 0; i < TOTAL; i++)
    {
        preco_custo += produtos[i].valor_custo;
    }
    printf("O total da media de precos de custo %.2f \n", (preco_custo / TOTAL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < TOTAL; j++)
        {
            media_itens += produtos[j].estoque;
        }
        printf("O total da filial  %d foi %f \n", (media_itens / TOTAL));
    }
    return 0;
}