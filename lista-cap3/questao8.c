/* Questao 08 - Validacao de nota (0.0 a 10.0) com do-while */
#include <stdio.h>

int main(void) {
    double nota;
    int lidos;

    do {
        printf("Informe uma nota entre 0.0 e 10.0: ");
        lidos = scanf("%lf", &nota);

        if (lidos == EOF) {
            printf("\nEntrada encerrada sem nota valida.\n");
            return 1;
        }
        if (lidos != 1) {                 /* usuario digitou algo nao numerico */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
                /* descarta o restante da linha */
            }
            nota = -1.0;                  /* forca o valor a ser considerado invalido */
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! Digite um valor entre 0.0 e 10.0.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");
    return 0;
}