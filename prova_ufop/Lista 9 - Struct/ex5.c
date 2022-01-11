#include <stdio.h>
#include <stdlib.h>

typedef struct Atletas
{
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} atletas;

void exibe(atletas a)
{
    printf("Nome: %s | esporte: %s | idade: %d | altura: %0.2f\n",a.nome, a.esporte, a.idade,a.altura);
}
void exibe_altura(atletas b)
{
    printf("Nome: %s | esporte: %s | idade: %d | altura: %0.2f\n",b.nome, b.esporte, b.idade,b.altura);
}
int main()
{
    int n,cont,maior_idade=0,maior_altura=0;
    int pos_maior,pos_maior_alt;

    atletas *Atletas=NULL;
    printf("Digite o numero de atletas:\n");
    scanf("%d", &n);
    Atletas = (atletas*) malloc(n * sizeof(atletas));
    if (Atletas != NULL)
    {
        for(cont =0; cont <n; cont++)
        {
            getchar();
            printf("Digite o nome do atleta:\n");
            fgets(Atletas[cont].nome, 50, stdin);
            printf("Digite o nome do esporte:\n");
            scanf("%s", &Atletas[cont].esporte);
            printf("Digite a idade do atleta:\n");
            scanf("%d", &Atletas[cont].idade);
            printf("Digite a altura do atleta:\n");
            scanf("%f", &Atletas[cont].altura);
        }
        maior_idade = Atletas[0].idade;
        pos_maior = 0;
        maior_altura = Atletas[0].altura;
        pos_maior_alt = 0;

        for(int cont=1; cont<n; cont++)
        {
            if(Atletas[cont].idade > maior_idade)
            {
                maior_idade = Atletas[cont].idade;
                pos_maior = cont;
            }
            else if(Atletas[cont].altura > maior_altura)
            {
                maior_altura = Atletas[cont].altura;
                pos_maior_alt = cont;
            }
        }
        printf("Dados do atleta mais velho\n");
        exibe(Atletas[pos_maior]);
        printf("Dados do atleta mais alto\n");
        exibe(Atletas[pos_maior_alt]);

        free(Atletas);
    }
    else
    {
        printf("Problema na alocacao de memoria!");
        return -1;
    }
    return 0;
}
