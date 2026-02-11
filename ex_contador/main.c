#include <stdio.h>

int main(void)
{
    int n, neg = 0, pos = 0, i;

    printf("\nDigite 10 numeros e eu te digo quantos sao positivos e quantos sao negativos\n");

    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
    }

    printf("\nVoce digitou %d numeros negativos e %d numeros positivos.\n", neg, pos);

    return 0;
}