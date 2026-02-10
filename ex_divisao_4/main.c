#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i, n, m;

    printf("\nDigite um numero\n");
    scanf("%d", &n);
    printf("\nDigite outro numero para descobrir seus multiplos\n");
    scanf("%d", &m);

    printf("\nOs multiplos de %d entre 1 e %d sao:\n", m, n);
    for (i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}