#include <stdio.h>

#define PI 3.141593

int main() {
    double raio, area_superficie, volume;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area_superficie = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio; // 4.0/3.0 evita truncamento de divisao inteira

    printf("Area de superficie: %.2f\n", area_superficie);
    printf("Volume: %.2f\n", volume);
    return 0;
}