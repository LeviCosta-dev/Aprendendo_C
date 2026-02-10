#include <stdio.h>

int main(void)
{
    int a, b, s, cont;
    cont = 1;

    do
    {
        printf("\nDigite dois numeros\n");
        scanf("%d%d", &a, &b);

        s = a + b;

        printf("A soma dos dois numeros eh: %d", s);
        cont++;
    } while (cont <= 5);

    return 0;
}