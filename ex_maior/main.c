#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, aux;

    printf("\nDigite 5 numeros que eu digo o maior\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > e)
    {
        aux = a;
        a = e;
        e = aux;
    }
    if (a > d)
    {
        aux = a;
        a = d;
        d = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > e)
    {
        aux = b;
        b = e;
        e = aux;
    }
    if (b > d)
    {
        aux = b;
        b = d;
        d = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (c > e)
    {
        aux = c;
        c = e;
        e = aux;
    }
    if (c > d)
    {
        aux = c;
        c = d;
        d = aux;
    }
    if (d > e)
    {
        aux = d;
        d = e;
        e = aux;
    }

    printf("O maior numero eh %d", e);
    return 0;
}