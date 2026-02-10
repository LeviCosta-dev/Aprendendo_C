#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i, n;
    printf("\nDigite um numero\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d", i);
    }
    return 0;
}