#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    // %d forca a impressao do valor inteiro armazenado internamente no char,
    // que corresponde ao seu codigo na tabela ASCII.
    printf("O codigo ASCII de '%c' e: %d\n", c, c);
    return 0;
}