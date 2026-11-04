#include <stdio.h>

int main() {
    int horas;
    float total = 0;
    printf("Horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) total = 0;
    else if (horas <= 2) total = horas * 2.00;
    else if (horas <= 4) total = (2 * 2.00) + ((horas - 2) * 2.50);
    else total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);

    printf("Total: R$ %.2f\n", total);
    return 0;
}