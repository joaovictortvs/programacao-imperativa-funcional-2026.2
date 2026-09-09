#include <stdio.h>

int main() {
    double horas_normais, horas_extras;
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    double salario_bruto = (horas_normais * 10.0) + (horas_extras * 15.0);

    // Operador ternario: isento ate R$12000; 10% sobre o valor excedente
    double imposto = (salario_bruto <= 12000.0) ? 0.0 : (salario_bruto - 12000.0) * 0.10;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);
    return 0;
}