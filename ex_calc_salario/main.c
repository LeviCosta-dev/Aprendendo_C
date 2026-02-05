/*Exercício para calcular o salário de uma pessoa*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vht, nht, pd, vsb, vd, vsl;
    printf("\nQual o valor da sua hora trabalhada?\n");
    scanf("%f", &vht);

    printf("\nQuantas horas voce trabalha por dia?\n");
    scanf("%f", &nht);

    printf("\nQuantos porcento do seu salario e descontado no desconto do INSS?\n");
    scanf("%f", &pd);

    vsb = vht * nht * 21;
    vd = vsb * pd / 100;
    vsl = vsb * (1 - pd / 100);

    printf("\nConsiderando 21 dias uteis em um mes, seu salario bruto seria de R$%.2f, mas como R$%.2f e descontado pelo INSS, seu salario liquido e R$%.2f.\n", vsb, vd, vsl);
    system("pause");
    return 0;

    /*21 dias úteis por mês*/
}