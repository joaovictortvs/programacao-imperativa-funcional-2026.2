/* Questao 13 - Fatorial com tratamento de casos especiais */
#include <stdio.h>

int main(void) {
    int n, i;
    long long fatorial = 1;      /* 0! = 1 e 1! = 1 ja sao cobertos pelo valor inicial */

    printf("Informe um inteiro N: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) {
        printf("Erro: fatorial nao definido para numeros negativos.\n");
        return 1;
    }
    if (n > 20) {                /* 21! ultrapassa o limite de long long (64 bits) */
        printf("Erro: %d! excede a capacidade de long long (maximo N = 20).\n", n);
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);
    return 0;
}