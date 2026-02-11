#include <stdio.h>

int main(void)
{
    int fat = 1, i = 1, n;

    printf("\nDigite um numero para descobrir seu fatorial\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("\nNao existe fatorial de numero negativo");
        return 0;
    }
    else
    {
        do
        {
            fat = fat * i;
            i++;
        } while (i <= n);

        printf("\n%d! eh %d\n", n, fat);
        return 0;
    }
}