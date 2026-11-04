#include <stdio.h>

int main() {
    float sal, aumento = 0;
    int cargo;
    printf("Salario e cargo (1=Tec, 2=Ger, 3=Outro): ");
    scanf("%f %d", &sal, &cargo);

    switch (cargo) {
        case 1: aumento = (sal <= 3000) ? sal * 0.15 : sal * 0.10; break;
        case 2: aumento = (sal <= 5000) ? sal * 0.10 : sal * 0.05; break;
        case 3: aumento = sal * 0.08; break;
        default: printf("Cargo invalido!\n"); return 0;
    }

    printf("Aumento: R$ %.2f\nNovo salario: R$ %.2f\n", aumento, sal + aumento);
    return 0;
}