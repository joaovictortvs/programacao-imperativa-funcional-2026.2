/* Questao 21 - Jogo de adivinhacao de letra com dicas */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char secreta, palpite;
    int tentativas = 0;

    srand((unsigned)time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Sorteei uma letra minuscula entre 'a' e 'z'. Tente adivinhar!\n");

    do {
        printf("Seu palpite: ");
        if (scanf(" %c", &palpite) != 1) {
            printf("\nEntrada encerrada.\n");
            return 1;
        }

        if (palpite < 'a' || palpite > 'z') {
            printf("Digite apenas uma letra minuscula (a-z).\n");
            continue;                      /* nao conta como tentativa */
        }

        tentativas++;

        if (palpite < secreta) {
            printf("Errou! A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        } else if (palpite > secreta) {
            printf("Errou! A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);
    return 0;
}