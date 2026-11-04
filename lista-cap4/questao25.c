#include <stdio.h>

int main() {
    int tot, pago, troco;
    printf("Total e pago: ");
    scanf("%d %d", &tot, &pago);

    if (pago < tot) {
        printf("Valor insuficiente!\n");
    } else {
        troco = pago - tot;
        printf("Troco: R$ %d\n", troco);

        printf("100: %d\n", troco / 100); troco %= 100;
        printf("50: %d\n", troco / 50);   troco %= 50;
        printf("20: %d\n", troco / 20);   troco %= 20;
        printf("10: %d\n", troco / 10);   troco %= 10;
        printf("5: %d\n", troco / 5);     troco %= 5;
        printf("2: %d\n", troco / 2);     troco %= 2;
        if (troco > 1) printf("1: %d\n", troco);
    }
    return 0;
}