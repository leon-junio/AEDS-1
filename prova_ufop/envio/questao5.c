#include <stdio.h>
#include <stdlib.h>

int vader(int n)
{
    if (n < 1)
    {
        return 127;
    }
    else
    {
        return (pow(n, 2)) - (pow(2, n - 1)) + vader(n - 1);
    }
}

int main()
{
    int n, result;
    printf("Digite o valor de n \n");
    scanf("%d%*c",&n);
    result = vader(n);
    printf("O resultado e %d \n", result);
    return 0;
}