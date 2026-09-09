#include <stdio.h>

int main() {
    double comprimento, largura, preco_metro;
    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%lf %lf", &comprimento, &largura);
    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%lf", &preco_metro);

    double perimetro = 2 * (comprimento + largura);
    double metros_arame = perimetro * 3; // 3 fios ao longo do perimetro
    double custo_total = metros_arame * preco_metro;

    printf("Metros de arame necessarios: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);
    return 0;
}