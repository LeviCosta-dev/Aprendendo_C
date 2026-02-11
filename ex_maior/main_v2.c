#include <stdio.h>

int main(void)
{
    int n, i, maior, qnt;

    printf("\nVoce quer descobrir o maior numero entre quantos?\n");
    scanf("%d", &qnt);

    printf("\nDigite %d numeros que eu te digo o maior\n", qnt);
    scanf("%d", &maior);

    for (i = 1; i < qnt; i++)
    {
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        }
    }
    printf("\nO maior numero eh o %d\n", maior);

    return 0;
}