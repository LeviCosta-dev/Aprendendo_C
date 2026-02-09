/*Exercício que faça a leitura de dois valores numéricos e efetue a dição entre eles. Caso o resultado seja maior ou igual a 10, deve ser apresentado somado a ele mais 5. Caso seja menor que 10, deve ser apresentado subtraindo dele 7*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, soma;

    printf("\nDigite um numero\n");
    scanf("%d", &n1);
    printf("\nDigite outro numero\n");
    scanf("%d", &n2);

    soma = n1 + n2;

    if (soma >= 10)
    {
        printf("\n%d\n", soma + 5);
    }
    else
    {
        printf("\n%d\n", soma - 7);
    }
    return 0;
    system("pause");
}