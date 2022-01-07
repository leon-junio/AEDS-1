/*
Exercicio 1 - Criar um vetor para receber a nota de 10 alunos e retornar a media dessas notas por meio de um procedimento
Autor: Leon Júnio Martins Ferreira
Data: 10/11/2021
*/

#include <stdio.h>

//procedimento para preenchimento das notas
void preencherNotas(float vetor[10])
{
    printf("Preenchendo notas \n");
    //laço de repetição para armazenar corretamente as 10 notas
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota do %d aluno \n", (i + 1));
        //recebendo a entrada e salvando a mesma dentro do vetor de notas
        scanf("%f%*c",&vetor[i]);
    }
}

//procedimento para calcular media das notas da turma que recebe um vetor como parametro
void calcularMedia(float vetor[10]){
    //declarando uma alocação dinamica para o vetor
    float *vetornew = malloc(sizeof(int)*10),media = 0,somatotal = 0;
    int acima = 0;
    vetornew = vetor;
    //realizando calculo da media dentro de loops
    for(int i=0;i<10;i++){
        somatotal += vetornew[i];
    }
    media = (float) somatotal/10;
    for(int i=0;i<10;i++){
        if(vetornew[i]>media){
            acima++;
        }
    }
    //imprimindo os resultados obtidos
    printf("Resultados: \n");
    printf("Total da media de alunos: %.2f\n",media);
    printf("Total de alunos acima da media: %d\n",acima);
}

int main(void)
{
    //declaracao do vetor principal de 10 alunos que armazenara 10 notas
    float vetor[10];
    //chamando procedimento para preencher o vetor
    preencherNotas(vetor);
    //chamando procedimento para calcular media
    calcularMedia(vetor);
    printf("Fim do programa");
    return 0;
}