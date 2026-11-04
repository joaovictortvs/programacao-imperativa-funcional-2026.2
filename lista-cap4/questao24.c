#include <stdio.h>

int main() {
    int a, b, c;
    printf("Tres angulos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180) {
        printf("Soma invalida!\n");
    } else {
        if (a == 90 || b == 90 || c == 90) printf("Retangulo\n");
        else if (a > 90 || b > 90 || c > 90) printf("Obtusangulo\n");
        else printf("Acutangulo\n");
    }
    return 0;
}