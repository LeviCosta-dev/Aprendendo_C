/*Exercício de conversão de temperatura em °C para °F*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float tc, tf;
    printf("\nQual a temperatura em C?\n");
    scanf("%f", &tc);

    tf = 9 * tc / 5 + 32;

    printf("\nA temperatura e de %fF.\n", tf);
    return 0;
}