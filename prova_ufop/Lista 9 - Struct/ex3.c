#include <stdio.h>
#include <math.h>
#include <stdlib.h>


typedef struct
{
    int x,y;

} Ponto;

typedef struct
{
    Ponto pSE, pID;

} Retangulo;


int main()
{
    int b,h;
    float area,diag, per;
    Retangulo ret;

    printf(" Insira a posicao x do ponto superior esquerdo: ");
    scanf("%d", &ret.pSE.x);
    printf(" Insira a posicao y do ponto superior esquerdo: ");
    scanf("%d", &ret.pSE.y);

    printf("\n");

    printf(" Insira a posicao x do ponto inferior direito: ");
    scanf("%d", &ret.pID.x);
    printf(" Insira a posicao y do ponto inferior direito: ");
    scanf("%d", &ret.pID.y);

    h=ret.pSE.y-ret.pID.y;
    b=ret.pID.x-ret.pSE.x;

    area=b*h;
    per= 2 * (b + h);
    diag = sqrt(pow(b, 2) + pow(h, 2));


    printf("\n Area: %.2f", area);
    printf("\n Diagonal: %.2f", diag);
    printf("\n Perimetro: %.2f", per);

    return 0;
}
