#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    // Para evitar matematicamente a divisao por zero, verificamos se o
    // divisor (b) e diferente de zero antes de realizar a operacao,
    // ja que a divisao por zero e indefinida.
    if (b != 0) {
        double divisao = (double) a / b; // cast garante divisao real (sem truncamento)
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: indefinida (divisao por zero)\n");
    }

    return 0;
}