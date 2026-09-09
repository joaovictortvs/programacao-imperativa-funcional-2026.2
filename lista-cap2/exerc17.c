#include <stdio.h>

#define PI 3.141593

int main() {
    double raio, area, circunferencia;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
    return 0;
}