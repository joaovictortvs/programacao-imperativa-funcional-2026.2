/* Questao 11 - Intervalo fechado entre A e B (crescente ou decrescente) */
#include <stdio.h>

int main(void) {
    int a, b, i;

    printf("Informe o inteiro A: ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Informe o inteiro B: ");
    if (scanf("%d", &b) != 1) return 1;

    if (a <= b) {
        printf("Ordem crescente de %d a %d:\n", a, b);
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        printf("Ordem decrescente de %d a %d:\n", a, b);
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}