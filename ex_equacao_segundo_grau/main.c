#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, x1, x2;

    printf("\nResolva sua equacao do segundo grau!\n");
    printf("Digite o valor de A.\n");
    scanf("%g", &a);
    printf("\nDigite o valor de B.\n");
    scanf("%g", &b);
    printf("\nDigite o valor de C.\n");
    scanf("%g", &c);

    if (a == 0)
    {
        printf("\nIsso nao eh uma equacao do segundo grau (A = 0)\n");
        return 0;
    }
    else
    {
        d = pow(b, 2) - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("\nAs raizes da equacao sao: %g e %g\n", x1, x2);
        }
        if (d == 0)
        {
            x1 = (-b) / (2 * a);
            printf("\nComo o discriminante eh 0, a equacao so tem uma raiz que eh %g\n", x1);
        }
        if (d < 0)
        {
            printf("\nComo o discriminante eh menor que 0, a equacao nao tem raizes reais\n");
        }
    }
}