#include <stdio.h>

int main(void)
{

    int f, cont, n;
    cont = 1;
    n = 1;

    printf("\nDigite um numero\n");
    scanf("%d", &f);

    do
    {
        n = n * cont;
        cont++;
    } while (cont <= f);

    printf("\n%d! eh igual a %d\n", f, n);

    return 0;
}