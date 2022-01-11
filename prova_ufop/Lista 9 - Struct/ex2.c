#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Plano
{
    float x;
    float y;

};
int main()
{
    struct Plano cartesiano;
    float d;
    printf("Digite um valor para x: \n");
    scanf("%f", &cartesiano.x);
    printf("Digite um valor para y: \n");
    scanf("%f",&cartesiano.y);
    d = sqrt(pow((cartesiano.x - 0), 2) + pow((cartesiano.y - 0), 2));
    printf("\nDistancia entre o ponto e a origem (0, 0): %.2f.\n\n", d);

    return 0;
}
