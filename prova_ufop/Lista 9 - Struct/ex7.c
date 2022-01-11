#include <stdio.h>
#include <stdlib.h>

typedef struct jogadores
{
    int num;
    float peso;
    float altura;
    char nome[40];
}Jogadores;

void exibe(Jogadores a);
{
    printf("Nome: %s | esporte: %s | idade: %d | altura: %0.2f\n",a.nome, a.esporte, a.idade,a.altura);
}

int main()
{
    int n, cont;
    int maior_peso,pos_maior_peso //erro
    Jogadores *jogador=NULL;
    n=2;
    jogador = (Jogadores*) malloc(n * sizeof(Jogadores));
    if (jogador != NULL)
    {
        for(cont =0; cont < n; cont++)
        {
            printf("Digite o nome do jogador: \n");
            scanf("%s",&jogador[cont].nome);
            printf("Digite o numero da camisa do jogador: \n");
            scanf("%d",&jogador[cont].num);
            printf("Digite o peso do jogador: \n");
            scanf("%f",&jogador[cont].peso);
            printf("Digite a altura do jogador: \n");
            scanf("%f",&jogador[cont].altura);
        }
        printf("Dados de todos os 11 jogadores \n");
        for(cont=0; cont < n; cont++)
        {
            printf("Nome: %s | Numero da camisa:%d | Peso: %0.2f | Altura: %0.2f \n",jogador[cont].nome,jogador[cont].num,jogador[cont].peso,jogador[cont].altura);
        }
        maior_peso = jogador[0];
        pos_maior_peso = 0;
        for(int cont=1; cont<n; cont++)
        {
            if(jogador[cont].peso > maior_peso)
            {
                maior_peso = jogador[cont].peso;
                pos_maior_peso = cont;
            }
            printf("Numero da camisa do jogador mais pesado\n");
        exibe(Jogadores[pos_maior_peso]);

        free(jogador);
    }
    else
    {
        printf("Problema na alocacao de memoria!");
        return -1;
    }

    return 0;
} // nao sei fazer uma parte da questao
