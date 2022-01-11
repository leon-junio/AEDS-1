#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ligado = 0, temperatura = -1, opcao = 0, tomada = 1;
    printf("AR CONDICIONADO \n");
    while (tomada)
    {
        printf("1- Ligar\n");
        printf("2- Desligar\n");
        printf("3- Aumentar temperatura\n");
        printf("4- Diminuir temperatura\n");
        printf("5- Tirar da tomada\n");
        scanf("%d%*c", &opcao);
        switch (opcao)
        {
        case 1:
            if (!ligado)
            {
                ligado = 1;
                temperatura = 20;
                printf("AR CONDICIONADO LIGADO TEMPERATURA PADRAO 20\n");
            }
            else
            {
                printf("AR CONDICIONADO JA ESTA LIGADO\n");
            }
            break;
        case 2:
            if (!ligado)
            {
                printf("AR CONDICIONADO JA ESTA DESLIGADO\n");
            }
            else
            {
                temperatura = -1;
                ligado = 0;
                printf("AR CONDICIONADO DESLIGADO\n");
            }
            break;
        case 3:
            if (ligado)
            {
                if (temperatura < 27)
                {
                    temperatura++;
                    printf("TEMPERATURA AUMENTADA: %d\n", temperatura);
                }
                else
                {
                    printf("JA ESTA NA TEMPERATURA MAXIMA\n");
                }
            }
            else
            {
                printf("APARELHO DESLIGADO\n");
            }
            break;
        case 4:
            if (ligado)
            {
                if (temperatura > -15)
                {
                    temperatura--;
                    printf("TEMPERATURA REDUZIDA: %d\n", temperatura);
                }
                else
                {
                    printf("JA ESTA NA TEMPERATURA MINIMA\n");
                }
            }
            else
            {
                printf("APARELHO DESLIGADO\n");
            }
            break;
        case 5:
            tomada = 0;
            printf("RETIRANDO DA TOMADA\n");
            break;
        default:
            printf("Opção invalida \n");
            break;
        }
    }
    return 0;
}
