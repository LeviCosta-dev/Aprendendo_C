#include <stdio.h>

void miau(int vezes);

int main(void)
{
    int n;
    printf("Quantas vezes o gato vai miar?\n");
    scanf("%d", &n);
    printf("\n");
    miau(n);
}

void miau(int vezes)
{
    for (int i = 1; i <= vezes; i++)
    {
        printf("Miau\n");
    }
}