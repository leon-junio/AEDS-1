/*
Exercicio 4 - Identificar o erro de porque o 10 não era apresentado na saida do sistema
Autor: Leon Júnio Martins Ferreira
Data: 21/10/2021
*/
#include <stdio.h>
int main() 
{ 
    int x, *p, **q; 
    p = &x; 
    q = &p;  
    x = 10;
    printf("\n %d \n",**q); // o valor de 10 não aparecia porque era imprimido na tela o valor em inteiro do endereço do ponteiro q (&q), para arrumar o erro eu alterei o sinal de & para **, no qual eu defino que a partir desse momento é para imprimir o valor do endereço que o ponteiro aponta. No caso, o ponteiro aponta para outro ponteiro que aponta para o endereço com o valor 10.
    return(0);  
}
