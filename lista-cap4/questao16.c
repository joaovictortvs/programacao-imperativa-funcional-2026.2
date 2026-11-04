#include <stdio.h>

int main() {
    float dist, litros, consumo;
    printf("Distancia (km) e litros: ");
    scanf("%f %f", &dist, &litros);

    consumo = dist / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) printf("Venda o carro!\n");
    else if (consumo <= 14.0) printf("Economico!\n");
    else printf("Super economico!\n");

    return 0;
}