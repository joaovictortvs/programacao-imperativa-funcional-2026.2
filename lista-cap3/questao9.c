/* Questao 09 - Acumulador de valores reais com sentinela negativa */
#include <stdio.h>

int main(void) {
    double valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (um valor negativo encerra).\n");

    while (1) {
        printf("Valor: ");
        if (scanf("%lf", &valor) != 1) {   /* EOF ou entrada invalida */
            break;
        }
        if (valor < 0) {                   /* sentinela: nao entra nos calculos */
            break;
        }
        soma += valor;
        quantidade++;
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Media aritmetica: indefinida (nenhum valor valido foi digitado).\n");
    }
    return 0;
}