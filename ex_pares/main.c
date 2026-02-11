#include <stdio.h>

int main(void)
{
    int n, i;

    printf("\nDigite um numero\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nDigite um numero maior que 0\n");
        return 0;
    }

    if (n < 2)
    {
        printf("Nao existe nenhum numero par no intervalo");
        return 0;
    }

    printf("\nTodos os numeros pares de 1 ate %d sao:\n", n);

    for (i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}