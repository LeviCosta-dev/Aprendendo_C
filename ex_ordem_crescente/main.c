/*Exercício para receber dois valores e ordenar eles do menor para o maior*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, aux;

    printf("\nDigite um numero\n");
    scanf("%d", &n1);
    printf("\nDigite outro numero:\n");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf("\nOs numeros digitados foram %d e %d\n", n1, n2);
    }
    else
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
        printf("\nOs numeros digitados foram %d e %d\n", n1, n2);
    }
    system("pause");
    return 0;
}