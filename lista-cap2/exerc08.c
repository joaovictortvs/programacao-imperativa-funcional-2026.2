#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int quadrado = n * n;
    double decima_parte = n / 10.0; // 10.0 (double) evita a divisao inteira

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);
    return 0;
}