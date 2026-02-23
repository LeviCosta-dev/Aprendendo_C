#include <stdio.h>

int main(void)
{
    // d = dígitos do número
    // l = Luhn
    // v = guardar os dígitos para verificação
    // sp e si = soma par e ímpar
    long long numero;
    int sp, si, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, l1, l2, l3, v13, v14, v15, v16;

    printf("Numero: ");
    scanf("%lld", &numero);

    d1 = numero % 10;
    numero /= 10;

    d2 = numero % 10;
    numero /= 10;

    d3 = numero % 10;
    numero /= 10;

    d4 = numero % 10;
    numero /= 10;

    d5 = numero % 10;
    numero /= 10;

    d6 = numero % 10;
    numero /= 10;

    d7 = numero % 10;
    numero /= 10;

    d8 = numero % 10;
    numero /= 10;

    d9 = numero % 10;
    numero /= 10;

    d10 = numero % 10;
    numero /= 10;

    d11 = numero % 10;
    numero /= 10;

    d12 = numero % 10;
    numero /= 10;

    d13 = numero % 10;
    numero /= 10;

    d14 = numero % 10;
    numero /= 10;

    d15 = numero % 10;
    numero /= 10;

    d16 = numero % 10;
    numero /= 10;

    v13 = d13;
    v14 = d14;
    v15 = d15;
    v16 = d16;

    d2 = d2 * 2;
    if (d2 >= 10)
    {
        d2 = d2 % 10 + d2 / 10;
    }
    d4 = d4 * 2;
    if (d4 >= 10)
    {
        d4 = d4 % 10 + d4 / 10;
    }
    d6 = d6 * 2;
    if (d6 >= 10)
    {
        d6 = d6 % 10 + d6 / 10;
    }
    d8 = d8 * 2;
    if (d8 >= 10)
    {
        d8 = d8 % 10 + d8 / 10;
    }
    d10 = d10 * 2;
    if (d10 >= 10)
    {
        d10 = d10 % 10 + d10 / 10;
    }
    d12 = d12 * 2;
    if (d12 >= 10)
    {
        d12 = d12 % 10 + d12 / 10;
    }
    d14 = d14 * 2;
    if (d14 >= 10)
    {
        d14 = d14 % 10 + d14 / 10;
    }
    d16 = d16 * 2;
    if (d16 >= 10)
    {
        d16 = d16 % 10 + d16 / 10;
    }

    sp = d2 + d4 + d6 + d8 + d10 + d12 + d14 + d16;
    si = d1 + d3 + d5 + d7 + d9 + d11 + d13 + d15;

    if ((sp + si) % 10 == 0)
    {
        if (v15 == 3 && (v14 == 4 || v14 == 7))
        {
            printf("AMEX\n");
            return 0;
        }
        else if (v16 == 5 && (v15 == 1 || v15 == 2 || v15 == 3 || v15 == 4 || v15 == 5))
        {
            printf("MasterCard\n");
            return 0;
        }
        else if (v16 == 4 || v13 == 4)
        {
            printf("Visa\n");
            return 0;
        }
        else
        {
            printf("Invalido\n");
            return 0;
        }
    }
    else
    {
        printf("Invalido\n");
        return 0;
    }
}