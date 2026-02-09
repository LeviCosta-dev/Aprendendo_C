#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, d;

    printf("\nDigite um numero\n");
    scanf("%d", &n1);
    printf("\nDigite outro numero\n");
    scanf("%d", &n2);

    if (n1 >= n2)
    {
        d = n1 - n2;
        printf("\nA diferenca eh: %d\n", d);
    }
    else
    {
        d = n2 - n1;
        printf("\nA diferenca eh: %d\n", d);
    }
    system("pause");
    return 0;
}