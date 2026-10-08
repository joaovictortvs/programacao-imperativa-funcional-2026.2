/* Questao 23 - Quadrado vazado com o caractere 'X' */
#include <stdio.h>

int main(void) {
    int lado, i, j;

    do {
        printf("Informe o lado do quadrado L (3 a 20): ");
        if (scanf("%d", &lado) != 1) {
            return 1;
        }
        if (lado < 3 || lado > 20) {
            printf("Valor invalido!\n");
        }
    } while (lado < 3 || lado > 20);

    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("X");               /* borda */
            } else {
                printf(" ");               /* interior vazio */
            }
        }
        printf("\n");
    }
    return 0;
}