/* Questao 27 - Simulador de caixa eletronico (menor quantidade de cedulas)
 *
 * Observacao: com cedulas de 100, 50, 20, 10, 5 e 2, o metodo guloso simples
 * (pegar sempre a maior cedula possivel) falha para alguns valores, como 8
 * (guloso: 5 + 2 e sobra 1, mas 2+2+2+2 = 8 funciona) ou 13 (5+2+2+2+2).
 * Por isso a menor quantidade de cedulas e calculada com programacao dinamica
 * (minimo[v] = menor numero de cedulas para formar v) e depois a composicao
 * e obtida por subtracoes sucessivas, como pede o enunciado.
 * O valor R$ 1 e impossivel de formar com essas cedulas.
 */
#include <stdio.h>
#include <stdlib.h>

#define NUM_CEDULAS 6
#define LIMITE 1000000
#define INFINITO 1000000000

int main(void) {
    const int cedulas[NUM_CEDULAS] = {100, 50, 20, 10, 5, 2};
    int quantidade[NUM_CEDULAS] = {0};
    int valor, v, k;
    int *minimo, *escolha;

    printf("Informe o valor do saque (inteiro positivo, em reais): ");
    if (scanf("%d", &valor) != 1 || valor <= 0 || valor > LIMITE) {
        printf("Erro: informe um inteiro positivo de ate %d.\n", LIMITE);
        return 1;
    }

    minimo = malloc((valor + 1) * sizeof(int));
    escolha = malloc((valor + 1) * sizeof(int));
    if (minimo == NULL || escolha == NULL) {
        printf("Erro de memoria.\n");
        free(minimo);
        free(escolha);
        return 1;
    }

    minimo[0] = 0;
    for (v = 1; v <= valor; v++) {
        minimo[v] = INFINITO;
        escolha[v] = -1;
        for (k = 0; k < NUM_CEDULAS; k++) {
            if (v >= cedulas[k] && minimo[v - cedulas[k]] != INFINITO &&
                minimo[v - cedulas[k]] + 1 < minimo[v]) {
                minimo[v] = minimo[v - cedulas[k]] + 1;
                escolha[v] = k;
            }
        }
    }

    if (minimo[valor] == INFINITO) {
        printf("Impossivel sacar R$ %d com as cedulas disponiveis.\n", valor);
        free(minimo);
        free(escolha);
        return 1;
    }

    /* subtracoes sucessivas seguindo as escolhas otimas */
    v = valor;
    while (v > 0) {
        k = escolha[v];
        quantidade[k]++;
        v -= cedulas[k];
    }

    printf("\nSaque de R$ %d:\n", valor);
    for (k = 0; k < NUM_CEDULAS; k++) {
        if (quantidade[k] > 0) {
            printf("%d cedula(s) de R$ %d\n", quantidade[k], cedulas[k]);
        }
    }
    printf("Total de cedulas: %d\n", minimo[valor]);

    free(minimo);
    free(escolha);
    return 0;
}