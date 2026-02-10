#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n, i, p;

    printf("\nDigite um numero\n");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);
    for (i = 1; i <= 10; i++)
    {
        p = i * n;
        printf("%d\n", p);
    }
    return 0;
}