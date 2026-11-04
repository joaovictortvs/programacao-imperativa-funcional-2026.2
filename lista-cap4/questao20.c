#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    printf("Coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) { printf("'a' deve ser != 0\n"); return 0; }

    delta = (b * b) - (4 * a * c);

    if (delta < 0) printf("Sem raizes reais.\n");
    else if (delta == 0) printf("Raiz unica: %.2f\n", -b / (2 * a));
    else printf("Duas raizes: x1 = %.2f, x2 = %.2f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));

    return 0;
}