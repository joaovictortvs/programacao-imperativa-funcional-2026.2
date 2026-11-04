#include <stdio.h>

int main() {
    float val;
    int est;
    printf("Valor e estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%f %d", &val, &est);

    switch (est) {
        case 1: val *= 1.07; break;
        case 2: val *= 1.12; break;
        case 3: val *= 1.15; break;
        case 4: val *= 1.08; break;
        default: printf("Estado invalido!\n"); return 0;
    }
    printf("Preco final: R$ %.2f\n", val);
    return 0;
}