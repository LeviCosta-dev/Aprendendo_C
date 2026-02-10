#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float n1, n2, s, i;
    i = 1;
    while (i <= 5)
    {
        printf("\nDigite um numero\n");
        scanf("%g", &n1);
        printf("\nDigite outro numero\n");
        scanf("%g", &n2);

        s = n1 + n2;

        printf("\nA soma da %g adicao eh %g\n", i, s);

        i++; /*Mesma coisa que i = i + 1*/
        /*i-- == i = i - 1*/
    }
    system("pause");
    return 0;
}