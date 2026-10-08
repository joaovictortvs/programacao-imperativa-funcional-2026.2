/* Questao 14 - Numeros de 1 a 100 com seus quadrados e soma total */
#include <stdio.h>

int main(void) {
    int i;
    long soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += (long)i * i;
    }

    printf("\nSoma dos quadrados de 1 a 100 = %ld\n", soma);
    return 0;
}