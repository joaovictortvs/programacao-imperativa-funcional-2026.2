/* Questao 15 - Multiplos de 3 e de 5 ao mesmo tempo no intervalo [1, NUM] */
#include <stdio.h>

int main(void) {
    int num, i, encontrados = 0;

    printf("Informe um inteiro positivo NUM: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Erro: informe um inteiro positivo.\n");
        return 1;
    }

    printf("Multiplos de 3 e 5 entre 1 e %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }
    printf("\n");

    if (encontrados == 0) {
        printf("Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo.\n");
    }
    return 0;
}