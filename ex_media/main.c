/*Leitura de 4 valores (notas bimestrais), calcular a media e apresentá-la junto com uma mensagem de aprovado caso a média seja maior ou igual a 6. Caso seja menor, apresentar a media com mensagem de reprovado*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float n1, n2, n3, n4, m;

    printf("\nDigite o valor da sua primeira nota\n");
    scanf("%f", &n1);
    printf("\nDigite o valor da sua segunda nota\n");
    scanf("%f", &n2);
    printf("\nDigite o valor da sua terceira nota\n");
    scanf("%f", &n3);
    printf("\nDigite o valor da sua quarta nota\n");
    scanf("%f", &n4);

    m = (n1 + n2 + n3 + n4) / 4;

    if (m >= 6)
    {
        printf("\nParabens! Voce foi aprovado com media %.2f\n", m);
    }
    else
    {
        printf("\nVoce foi reprovado (media %.2f)\n", m);
    }
    system("pause");
    return 0;
}