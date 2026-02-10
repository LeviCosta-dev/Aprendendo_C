#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n, i;

    i = 1;

    printf("\nDigite um numero para descobrir todos os numeros impares que tem entre 1 e o seu numero\n");
    scanf("%d", &n);
    printf("\n");

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}