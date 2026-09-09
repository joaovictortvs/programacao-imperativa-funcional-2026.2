#include <stdio.h>

int main() {
    float lado, base_ret, altura_ret, base_tri, altura_tri;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    float area_quadrado = lado * lado;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base_ret, &altura_ret);
    float area_retangulo = base_ret * altura_ret;

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base_tri, &altura_tri);
    float area_triangulo = (base_tri * altura_tri) / 2.0f;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo: %.2f\n", area_triangulo);
    return 0;
}