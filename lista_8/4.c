/*
Exercicio 3 - Criar um sistema para gerenciamento de uma biblioteca.
Construir um algoritmo que:
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos
b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código de
catalogação e a área.
Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A
consulta se repete até que o usuário digite código finalizador -1.
Autor: Leon Júnio Martins Ferreira
Data: 28/11/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define registros 1500 //define o total de livros que vao ser analisados

typedef struct // Cria uma STRUCT para armazenar os dados de livros e gerar um tipo para a mesma
{
    int codigo;
    char doacao;
    char *nome_obra[350];
    char *nome_autor[350];
    char *editora[100];
    char *area[35];
} Livro; // Define o nome do novo tipo criado

int main()
{
    Livro livros[registros]; //cria um vetor com o total de lojas desejadas
    Livro *exatas; //cria ponteiros que vao servir como vetores dinamicos mais para frente
    Livro *humanas; //foi criado um vetor para cada area onde vao ficar os respectivos volumes
    Livro *biologicas; //Cada ponteiro vai ser alocado dinamicamente por meio do calloc e realloc
    int op = 0, cod = 0, area = 0, cex = 0, chu = 0, cbi = 0, chk = 0; // defino inteiros que vao ser usados
    //cex,cbi e chu são o total de volumes de cada area
    printf("Cadastro de livros para biblioteca \n");
    printf("Digite o codigo do livro, doacao (sim ou nao), nome da obra, nome do autor, editora e a area de atuacao \n");
    //preenchendo vetor de livros
    for (int i = 0; i < registros; i++)
    {
        Livro l; //definir variavel para livros que vai gerar novos cadastros
        //lendo todos os dados dos livros
        printf("Digite o codigo do livro %d :\n", i + 1);
        scanf("%d%*c", &l.codigo); 
        printf("Fruto de doacao ? (S - sim e N - nao) :\n");
        scanf("%c%*c", &l.doacao); 
        printf("Digite o nome do autor:\n");
        scanf("%s%*c", &l.nome_autor); 
        printf("Digite o nome da obra:\n");
        scanf("%s%*c", &l.nome_obra);
        printf("Digite o nome da editora:\n");
        scanf("%s%*c", &l.editora); 
        printf("Digite a area do livro: (exatas - humanas - biologicas)\n");
        scanf("%s%*c", &l.area); 
        livros[i] = l; //salvando o livro no vetor
    }
    //a partir daqui vao ser iniciados loops para alocar os vetores de cada area
    for (int i = 0; i < registros; i++)
    {
        //inicio verificando todos os livros em busca da area
        if (strcmp(livros[i].area, "exatas") == 0)
        {
            //verifico se é o primeiro livro
            if (cex == 0) //caso seja a primeira vez vai iniciar o vetor
            {
                exatas = calloc(1, sizeof(Livro)); //inicio o alocamento dinamico do primeiro livro
            }
            else //caso nao seja a primeira vez vai apenas dar mais espaço para os livros
            {
                exatas = realloc(exatas, 2 * sizeof(Livro)); //Aloco mais espaço para mais livros dessa area
            }
            exatas[cex] = livros[i]; //adicionando o livro ao vetor da area
            cex++; //incrementando o numero total de volumes desta area
        }
    }

    for (int i = 0; i < registros; i++)
    {
         //inicio verificando todos os livros em busca da area
        if (strcmp(livros[i].area, "humanas") == 0)
        {
            if (chu == 0)//caso seja a primeira vez vai iniciar o vetor
            {
                humanas = calloc(1, sizeof(Livro));//Aloco mais espaço para mais livros dessa area
            }
            else //caso nao seja a primeira vez vai apenas dar mais espaço para os livros
            {
                humanas = realloc(humanas, 2 * sizeof(Livro));//Aloco mais espaço para mais livros dessa area
            }
            humanas[chu] = livros[i]; //adicionando o livro ao vetor da area
            chu++; //incrementando o numero total de volumes desta area
        }
    }
    for (int i = 0; i < registros; i++)
    {
        if (strcmp(livros[i].area, "biologicas") == 0)
        {
            if (cbi == 0)//caso seja a primeira vez vai iniciar o vetor
            {
                biologicas = calloc(1, sizeof(Livro));//Aloco mais espaço para mais livros dessa area
            }
            else//caso nao seja a primeira vez vai apenas dar mais espaço para os livros
            {
                biologicas = realloc(biologicas, 2 * sizeof(Livro));//Aloco mais espaço para mais livros dessa area
            }
            biologicas[cbi] = livros[i];//adicionando o livro ao vetor da area
            cbi++;//incrementando o numero total de volumes desta area
        }
    }

    while (op != -1) //while que funciona como o menu de açoes
    {
        printf("Consultas ao estoque de livros:\n");
        printf(" 1 - Pesquisa\n-1 - Finalizar\n");
        scanf("%d%*c", &op);
        if (op == 1) //verifico a opção selecionada
        {
            printf("Digite o codigo \n");
            scanf("%d%*c", &cod);
            printf("Digite 1-Exatas, 2- Humanas ou 3- Biologicas \n");
            scanf("%d%*c", &area); //salvo a area e o codigo com base nesses parametros realizo a pesquisa
            if (area == 1) //verifico a area atras do livro
            {
                printf("LIVRO DE EXATAS \n");
                for (int i = 0; i < cex; i++)
                {
                    if (cod == exatas[i].codigo) //verificacao dos parametros
                    {
                        //mostrando livro encontrado
                        printf("=======================================\n");
                        printf("Titulo da obra: %s \n", exatas[i].nome_obra);
                        printf("Autor: %s \n", exatas[i].nome_autor);
                        printf("Editora: %s horas \n", exatas[i].editora);
                        printf("Doacao: %c \n", exatas[i].doacao);
                        printf("========================================\n");
                        chk = 1;
                    }
                }
                if (chk == 0)
                {
                    printf("NENHUM LIVRO LOCALIZADO NA AREA DE EXATAS COM ESSES PARAMENTROS \n"); //caso nao encontre
                }
            }
            //abaixo o codigo de busca se repete igual ao de cima
            else if (area == 2)
            {
                printf("LIVRO DE HUMANAS \n");
                for (int i = 0; i < chu; i++)
                {
                    if (cod == humanas[i].codigo)
                    {
                        printf("=======================================\n");
                        printf("Titulo da obra: %s \n", humanas[i].nome_obra);
                        printf("Autor: %s \n", humanas[i].nome_autor);
                        printf("Editora: %s horas \n", humanas[i].editora);
                        printf("Doacao: %c \n", humanas[i].doacao);
                        printf("========================================\n");
                        chk = 1;
                    }
                }
                if (chk == 0)
                {
                    printf("NENHUM LIVRO LOCALIZADO NA AREA DE HUMANAS COM ESSES PARAMENTROS \n");
                }
            }
            else if (area == 3)
            {
                printf("LIVRO DE BIOLOGICAS \n");
                for (int i = 0; i < cbi; i++)
                {
                    if (cod == biologicas[i].codigo)
                    {
                        printf("=======================================\n");
                        printf("Titulo da obra: %s \n", biologicas[i].nome_obra);
                        printf("Autor: %s \n", biologicas[i].nome_autor);
                        printf("Editora: %s horas \n", biologicas[i].editora);
                        printf("Doacao: %c \n", biologicas[i].doacao);
                        printf("========================================\n");
                        chk = 1;
                    }
                }
                if (chk == 0)
                {
                    printf("NENHUM LIVRO LOCALIZADO NA AREA DE BIOLOGICAS COM ESSES PARAMENTROS \n");
                }
            }
            else
            {
                printf("FALHA AO ENCONTRAR - INFORMACOES ERRONEAS \n"); //caso teha parametros invalidos
            }
        }
        chk = 0;
    }
    printf("FIM DO PROGRAMA\n");
    return 0;
}
