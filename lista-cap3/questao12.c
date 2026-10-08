/* Questao 12 - Tabela de conversao Celsius -> Fahrenheit e Kelvin */
#include <stdio.h>

int main(void) {
    int c;
    double f, k;

    printf("%10s %12s %12s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("%10s %12s %12s\n", "-------", "----------", "------");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("%10.2f %12.2f %12.2f\n", (double)c, f, k);
    }
    return 0;
}