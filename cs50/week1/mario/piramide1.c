#include <stdio.h>

int main(void)
{
    // i, n e c são contadores
    // qpl: Quadrados por Linha
    // epl: espaços por linha
    int i, n, c, altura, qpl = 1, epl;

    do
    {

        printf("Altura:  ");
        scanf("%d", &altura);
    } while (altura < 1 || altura > 8);

    epl = altura - 1;

    // Pirâmide que começa colocando quadrados na direita
    for (i = 1; i <= altura; i++)
    {
        // Quantos espaços vão ter na linha antes de começar a colocar #
        for (c = 1; c <= epl; c++)
        {
            printf(" ");
        }
        // Quantos # vão ter na linha
        for (n = 1; n <= qpl; n++)
        {
            printf("#");
        }
        epl--;
        qpl++;
        printf("\n");
    }
    return 0;
}