/* Questao 20 - Tabela ASCII (32 a 126) com decimal, hexadecimal e caractere */
#include <stdio.h>

int main(void) {
    int codigo;

    printf("%-8s %-8s %s\n", "Decimal", "Hex", "Caractere");
    printf("%-8s %-8s %s\n", "-------", "---", "---------");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%-8d %-8X %c\n", codigo, codigo, codigo);
    }
    return 0;
}