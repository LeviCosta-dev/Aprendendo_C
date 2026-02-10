#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float f, n, cont;

    printf("\nDigite seu numero\n");
    scanf("%g", &f);

    n = 1;
    cont = 1;

    while (n <= f)
    {
        cont = cont * n;
        n++;
    }
    printf("\n%g! eh igual a %g\n", f, cont);
    return 0;
}