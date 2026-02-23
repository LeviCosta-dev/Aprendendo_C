#include <stdio.h>

int main(void)
{
    // nm = número de moedas
    int nm = 0, troco = 0;

    do
    {
        printf("Troco:  ");
        scanf("%d", &troco);
    } while (troco < 0);
    while (troco >= 25)
    {
        troco = troco - 25;
        nm++;
    }
    while (troco >= 10)
    {
        troco = troco - 10;
        nm++;
    }
    while (troco >= 5)
    {
        troco = troco - 5;
        nm++;
    }
    while (troco >= 1)
    {
        troco = troco - 1;
        nm++;
    }
    printf("Numero de moedas: %d", nm);
    return 0;
}