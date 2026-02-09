#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, aux;

    printf("\nDigite o valor de A\n");
    scanf("%d", &a);
    printf("\nDigite o valor de B\n");
    scanf("%d", &b);
    printf("\nDigite o valor de C\n");
    scanf("%d", &c);
    /* 3 1 2*/

    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    printf("\nOs valores em ordem crescente sao: %d, %d, %d\n", a, b, c);
    system("pause");
    return 0;
}