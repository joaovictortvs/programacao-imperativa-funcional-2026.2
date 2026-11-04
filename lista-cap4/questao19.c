#include <stdio.h>

int main() {
    float a, b, c;
    printf("Tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) printf("Equilatero\n");
        else if (a == b || b == c || a == c) printf("Isosceles\n");
        else printf("Escaleno\n");
    } else {
        printf("Erro: Nao formam um triangulo!\n");
    }
    return 0;
}