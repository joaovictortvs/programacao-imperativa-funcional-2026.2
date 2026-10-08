/* Questao 18 - Inversao dos digitos de um numero inteiro positivo */
#include <stdio.h>

int main(void) {
    long numero, copia, invertido = 0;

    printf("Informe um inteiro positivo: ");
    if (scanf("%ld", &numero) != 1 || numero <= 0) {
        printf("Erro: informe um inteiro positivo.\n");
        return 1;
    }

    copia = numero;
    while (copia > 0) {
        invertido = invertido * 10 + copia % 10;   /* acrescenta o ultimo digito */
        copia /= 10;                               /* remove o ultimo digito */
    }

    printf("Numero invertido: %ld\n", invertido);
    return 0;
}