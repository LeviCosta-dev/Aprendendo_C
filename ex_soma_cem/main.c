#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i = 1, s = 0, n;
    printf("\nDigite um numero\n");
    scanf("%d", &n);
    do
    {
        s = s + i;
        i++;
    } while (i <= n);
    printf("\nO resultado da soma dos %d primeiros numeros eh %d\n", n, s);
    return 0;
}