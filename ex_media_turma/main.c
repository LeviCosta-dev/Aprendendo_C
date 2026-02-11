#include <stdio.h>

int main(void)
{
    int qnt, i, nm = 0;
    float n, soma = 0;

    printf("\nQuantos notas voce vai incluir?\n");
    scanf("%d", &qnt);

    if (qnt == 0)
    {
        printf("Favor, insira notas");
        return 0;
    }

    printf("\nDigite as notas\n");

    for (i = 1; i <= qnt; i++)
    {
        scanf("%f", &n);
        soma = soma + n;
        if (n >= 6)
        {
            nm++;
        }
    }
    printf("\nA media eh %.2f e tem %d notas acima da media.", soma / qnt, nm);

    return 0;
}