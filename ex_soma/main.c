/*Programa em C que leia dois valores numéricos, faça a operação de adição dos dois valores e apresente o resultado obitido*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, res;
    printf("\n Digite o valor 1: \n");
    scanf("%d", &a);

    printf("\n Digite o valor 2: \n");
    scanf("%d", &b);

    res = a + b;
    printf("O resultado da soma e %d. \n", res);

    return 0;
}