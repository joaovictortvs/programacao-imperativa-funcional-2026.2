#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) printf("PAR\n");
    else printf("IMPAR\n");

    if (n > 0) printf("POSITIVO\n");
    else if (n < 0) printf("NEGATIVO\n");
    else printf("ZERO\n");

    return 0;
}