#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a, b, aux;
    printf("\nDigite o valor de A:\n");
    scanf("%d", &a);

    printf("\nDigite o valor de B:\n");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Como os valores foram trocados, A = %d e B = %d", a, b);
    return 0;
}