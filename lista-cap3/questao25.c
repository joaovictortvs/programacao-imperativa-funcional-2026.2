/* Questao 25 - Teste de primalidade contando os divisores */
#include <stdio.h>

int main(void) {
    int n, i, divisores = 0;

    printf("Informe um inteiro positivo N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: informe um inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores de %d: %d\n", n, divisores);

    if (n > 1 && divisores == 2) {      /* apenas 1 e ele mesmo */
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d NAO e um numero primo.\n", n);
    }
    return 0;
}