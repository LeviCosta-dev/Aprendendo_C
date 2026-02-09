/*Escrever um progama em linguagem C que faça a leitura de dois valores numéricos, efetuar a adição e apresentar o seu resultado caso o valor somado seja maior que 10*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, soma;

    printf("\nDigite o primeiro numero\n");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero numero\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    if (soma > 10)
        printf("\nO resultado eh: %d\n", soma);
    system("pause");
    return 0;
}