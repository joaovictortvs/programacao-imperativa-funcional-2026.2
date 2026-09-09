#include <stdio.h>

int main() {
    int n, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    antecessor = n;
    antecessor--; // operador unario de decremento

    sucessor = n;
    sucessor++; // operador unario de incremento

    printf("Antecessor: %d\n", antecessor);
    printf("Numero digitado: %d\n", n);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}