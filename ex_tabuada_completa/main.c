#include <stdio.h>

int main(void)
{
    int i = 1, n;

    printf("\nDigite um numero para descobrir sua tabuada\n");
    scanf("%d", &n);

    printf("\nA tabuada do %d eh:\n", n);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}