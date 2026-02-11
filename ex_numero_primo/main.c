#include <stdio.h>

int main(void)
{
    int i, n;

    printf("\nDigite um numero para descobrir se ele eh primo ou nao\n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("\nO numero %d nao eh primo\n", n);
        return 0;
    }

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("\nO numero %d nao eh primo\n", n);
            return 0;
        }
    }
    printf("\nO numero %d eh primo", n);

    return 0;
}