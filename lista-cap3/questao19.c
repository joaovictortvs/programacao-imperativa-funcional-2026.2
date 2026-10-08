/* Questao 19 - N-esimo termo da sequencia de Fibonacci (1, 1, 2, 3, 5, ...) */
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long anterior = 1, atual = 1, proximo;

    printf("Informe o numero do termo desejado N (1 a 90): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 90) {
        printf("Erro: N deve estar entre 1 e 90 (limite do tipo unsigned long long).\n");
        return 1;
    }

    printf("Termos ate N:\n");
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            printf("%llu ", 1ULL);
        } else {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
            printf("%llu ", atual);
        }
    }
    printf("\n\nO termo %d da sequencia de Fibonacci e %llu\n", n, n <= 2 ? 1ULL : atual);
    return 0;
}