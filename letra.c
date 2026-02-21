#include <stdio.h>

int main(void)
{
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("\nOla %s! Voce tem %d anos e %.2fm de altura.\n", nome, idade, altura);

    return 0;
}