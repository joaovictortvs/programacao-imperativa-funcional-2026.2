/* Questao 26 - Primos no intervalo fechado [A, B] e sua soma */
#include <stdio.h>

static int eh_primo(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int a, b, n, quantidade = 0;
    long soma = 0;

    do {
        printf("Informe dois inteiros positivos A e B (com A < B): ");
        if (scanf("%d %d", &a, &b) != 2) {
            return 1;
        }
        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! Tente novamente.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]:\n", a, b);
    for (n = a; n <= b; n++) {
        if (eh_primo(n)) {
            printf("%d ", n);
            soma += n;
            quantidade++;
        }
    }
    printf("\n");

    if (quantidade == 0) {
        printf("Nenhum primo encontrado no intervalo.\n");
    }
    printf("Soma dos primos encontrados: %ld\n", soma);
    return 0;
}