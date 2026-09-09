#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float media_simples = (n1 + n2 + n3 + n4) / 4.0f;

    // Pesos: 1 para as provas 1 e 2; 2 para as provas 3 e 4 (soma dos pesos = 6)
    float media_ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0f;

    printf("Media aritmetica simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);
    return 0;
}