#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i, n;

    printf("\nDigite um numero\n");
    scanf("%d", &n);

    printf("\nOs multiplos de 4 entre 1 e %d sao:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}