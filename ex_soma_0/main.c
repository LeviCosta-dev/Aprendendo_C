#include <stdio.h>

int main(void)
{
    int n, s = 0;

    printf("\nDigite numeros para somar. Quando quiser parar, digite 0.\n");

    while (scanf("%d", &n) == 1 && n != 0)
    {
        s = s + n;
    }
    printf("\nA soma eh: %d\n", s);

    return 0;
}