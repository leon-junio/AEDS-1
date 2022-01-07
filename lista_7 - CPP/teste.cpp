#include <stdio.h>
#include <stdbool.h>

void calc(float *a, float b) {

   *a = (*a+b)/2;

    b = *a +b/2;

} 

void main() {
    int n=1;
    for (int i = 1; i <= 5; i++)
    {
       for (int j = 1; j <= i; j++)
       {
           n = n+1;
       }
       
    }

   printf("%d",n); 

} 