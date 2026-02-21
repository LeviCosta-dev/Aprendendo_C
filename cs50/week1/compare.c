#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Digite o valor de X\n");
    scanf("%d", &x);
    printf("Digite o valor de Y\n");
    scanf("%d", &y);

    if (x < y)
    {
        printf("X eh menor que Y\n");
    }
    else if (x > y)
    {
        printf("X eh maior que Y\n");
    }
    else
    {
        printf("X eh igual a Y\n");
    }
    return 0;
}