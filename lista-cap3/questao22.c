/* Questao 22 - Triangulo de Floyd */
#include <stdio.h>

int main(void) {
    int n, linha, coluna, numero = 1;

    printf("Informe o numero de linhas N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: informe um inteiro positivo.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }
            printf("%d", numero);
            numero++;
        }
        printf("\n");
    }
    return 0;
}