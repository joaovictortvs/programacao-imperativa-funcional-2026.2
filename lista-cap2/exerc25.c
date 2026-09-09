#include <stdio.h>

int main() {
    double salario_base;
    printf("Digite o salario-base: ");
    scanf("%lf", &salario_base);

    double gratificacao = salario_base * 0.05; // 5% adicional
    double imposto = salario_base * 0.07;      // 7% retido
    double salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salario_liquido);
    return 0;
}