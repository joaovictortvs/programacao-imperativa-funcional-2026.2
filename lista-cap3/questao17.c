/* Questao 17 - Estatisticas de turma (encerra com -1.0) */
#include <stdio.h>

int main(void) {
    double nota, soma = 0.0, maior = 0.0, menor = 0.0;
    int total = 0;

    printf("Digite as notas (0.0 a 10.0). Digite -1.0 para encerrar.\n");

    while (1) {
        printf("Nota: ");
        if (scanf("%lf", &nota) != 1) {    /* EOF ou entrada invalida */
            break;
        }
        if (nota == -1.0) {                /* sentinela */
            break;
        }
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida, ignorada.\n");
            continue;
        }

        if (total == 0) {                  /* primeira nota inicializa maior e menor */
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        soma += nota;
        total++;
    }

    if (total == 0) {
        printf("\nNenhuma nota valida foi informada.\n");
        return 0;
    }

    printf("\nTotal de alunos avaliados: %d\n", total);
    printf("Maior nota da turma: %.2f\n", maior);
    printf("Menor nota da turma: %.2f\n", menor);
    printf("Media geral da turma: %.2f\n", soma / total);
    return 0;
}