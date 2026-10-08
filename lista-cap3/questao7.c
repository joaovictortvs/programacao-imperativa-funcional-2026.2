/* Questao 07 - Contagem progressiva de 0 a 100 em tres versoes */
#include <stdio.h>

void contar_for(void) {
    int i;
    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void contar_while(void) {
    int i = 0;
    printf("Versao com while:\n");
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void contar_do_while(void) {
    int i = 0;
    printf("Versao com do-while:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main(void) {
    contar_for();
    contar_while();
    contar_do_while();
    return 0;
}

/*
 * Qual estrutura e a mais adequada para este caso?
 *
 * O laco for. O numero de repeticoes e conhecido de antemao (101 valores,
 * de 0 ate 100) e existe uma variavel de controle bem definida. O for reune
 * inicializacao, teste e incremento em uma unica linha, o que deixa o codigo
 * mais curto, legivel e menos sujeito a erros (como esquecer o i++, que
 * causaria laco infinito no while/do-while). O do-while seria desnecessario,
 * pois nao ha necessidade de garantir uma execucao minima do bloco.
 */