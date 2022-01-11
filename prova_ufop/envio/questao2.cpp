#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carros = 0;
    float combustivel = 0, kms = 0, desempenho = 0, totalCombs = 0, totalKms = 0, totalDes = 0;
    do
    {
        printf("Digite a quantidade de combustivel: ");
        scanf("%f%*c", &combustivel);
        if (combustivel != -1)
        {
            carros++;
            printf("Digite a quantidade de quilometros rodados: ");
            scanf("%f%*c", &kms);
            desempenho = kms / combustivel;
            printf("= Desempenho em kilometros por litro (km/l): %.2f \n", desempenho);
            totalCombs += combustivel;
            totalKms += kms;
            totalDes += desempenho;
        }
    } while (combustivel != -1);
    printf("Quantidade total de combustivel utilizada: %2.f \n", totalCombs);
    printf("Quantidade total de quilometros percorridos: %2.f \n", totalKms);
    printf("Media de combustivel utilizada: %2.f \n", (totalCombs / carros));
    printf("Media de quilometros percorridos: %2.f \n", (totalKms / carros));
    printf("Media do desempenho dos carros: %2.f \n", (totalDes / carros));
    return 0;
}