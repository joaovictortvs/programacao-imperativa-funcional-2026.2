#include <stdio.h>

int main() {
    int dias_trabalhados;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    double valor_bruto = dias_trabalhados * 30.0;
    double imposto = valor_bruto * 0.08;
    double valor_liquido = valor_bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Valor liquido: R$ %.2f\n", valor_liquido);
    return 0;
}