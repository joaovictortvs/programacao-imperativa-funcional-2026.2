#include <stdio.h>

int main() {
    int op;
    float t;
    printf("1. C->F\n2. C->K\n3. F->C\n4. K->C\nOpcao: ");
    scanf("%d", &op);
    printf("Temperatura: ");
    scanf("%f", &t);

    switch (op) {
        case 1: printf("%.2f °F\n", t * 1.8 + 32); break;
        case 2: printf("%.2f K\n", t + 273.15); break;
        case 3: printf("%.2f °C\n", (t - 32) / 1.8); break;
        case 4: printf("%.2f °C\n", t - 273.15); break;
        default: printf("Invalido!\n");
    }
    return 0;
}