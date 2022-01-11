#include <stdio.h>
#include <string.h>

struct Aluno{
   char nome[50];
   int idade;
   int num_casa;
   char rua[30];
   char bairro[30];
};

int main(){

    struct Aluno aluno1;
    printf("Digite seu nome: \n");
    scanf("%s", &aluno1.nome);
    printf("Digite sua idade: \n");
    scanf("%d", &aluno1.idade);
    printf("Agora voce vai digitar seu endereco: \n");
    printf("Digite o numero da sua casa: \n");
    scanf("%d", &aluno1.num_casa);
    printf("Digite o nome da sua rua: \n");
    scanf("%s", &aluno1.rua);
    printf("Digite o nome do bairro: \n");
    scanf("%s", &aluno1.bairro);

    printf("Os dados digitdos foram: \n");
    printf("\tnome: %s- idade: %d - endereco: rua %s,numero %d , bairro %s \n", aluno1.nome,aluno1.idade,aluno1.rua,aluno1.num_casa,aluno1.bairro);

    return 0;
}
