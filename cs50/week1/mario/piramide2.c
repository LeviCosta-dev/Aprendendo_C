#include <stdio.h>

int main(void)
{
    // i, n e c são contadores
    // qpl: Quadrados por Linha
    // epl: espaços por linha
    int i, n1, n2, c, altura, qpl1 = 1, qpl2 = 1, epl;

    do
    {

        printf("Altura:  ");
        scanf("%d", &altura);
    } while (altura < 1 || altura > 8);

    epl = altura - 1;

    for (i = 1; i <= altura; i++)
    {

        // Pirâmide que começa colocando quadrados na direita
        // Quantos espaços vão ter na linha antes de começar a colocar #
        for (c = 1; c <= epl; c++)
        {
            printf(" ");
        }
        // Quantos # vão ter na linha
        for (n1 = 1; n1 <= i; n1++)
        {
            printf("#");
        }
        epl--;
        printf("  ");

        // pirâmide que começa na esquerda e adiciona quadrados na direita
        for (n2 = 1; n2 <= i; n2++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}