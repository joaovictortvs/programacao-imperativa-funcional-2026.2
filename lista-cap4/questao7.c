#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um numero real: ");
    scanf("%lf", &num);

    if (num >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    } else {
        printf("Quadrado: %.2f\n", num * num);
    }
    return 0;
}