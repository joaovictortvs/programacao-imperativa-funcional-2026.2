/* Questao 24 - Padrao em X (diagonais cruzadas) */
#include <stdio.h>

int main(void) {
    int n, i, j;

    do {
        printf("Informe uma dimensao IMPAR N (3 a 19): ");
        if (scanf("%d", &n) != 1) {
            return 1;
        }
        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor invalido!\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {   /* diagonal principal ou secundaria */
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}