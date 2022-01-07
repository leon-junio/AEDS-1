/*
Exercicio 8 - Calcular dados para uma locadora de veiculos
Autor: Leon Júnio Martins Ferreira
Data: 01/11/2021
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *arq;
    arq = fopen("veiculos.txt", "w");
    int num = 0;
    float valor = 0, total = 0, conta = 0;
    printf("Digite o numero de veiculos: \n");
    scanf("%d%*c", &num);
    printf("Digite o valor do aluguel : \n");
    scanf("%f%*c", &valor);
    conta = ((num * (float)(1 / 3)) * valor) * 12;
    printf("Valor recebido anualmente %f \n", conta);
    fprintf(arq, "%d \n", conta);
    conta = (num * (float)(1 / 10)) * (valor + (valor * 0.20));
    printf("Valor recebido mensal com multas %f \n", conta);
    fprintf(arq, "%d \n", conta);
    conta = (num * 0.02) * 600;
    printf("Gasto anual com manutencao %f \n", conta);
    fprintf(arq, "%d \n", conta);
    fclose(arq);
    printf("FIM DE PROGRAMA");
    return 0;
}