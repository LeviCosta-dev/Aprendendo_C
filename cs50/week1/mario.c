#include <stdio.h>

int main(void)
{
    int i, j, linha, coluna;

    printf("Quantas colunas seu quadrado vai ter?\n");
    scanf("%d", &i);
    printf("Quantas linhas seu quadrado vai ter?\n");
    scanf("%d", &j);

    for (linha = 1; linha <= j; linha++)
    {
        for (coluna = 1; coluna <= i; coluna++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}