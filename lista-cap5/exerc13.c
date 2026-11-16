#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int op;
    float n1, n2;
    
    printf("1-Soma | 2-Subtracao | 3-Multiplicacao | 4-Divisao\n");
    printf("Escolha: ");
    scanf("%d", &op);
    
    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);
    
    switch (op) {
        case 1:
            printf("Resultado: %.2f\n", soma(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(n1, n2));
            break;
        case 4:
            if (n2 == 0) {
                printf("Erro: divisao por zero\n");
            } else {
                printf("Resultado: %.2f\n", divide(n1, n2));
            }
            break;
        default:
            printf("Opcao invalida\n");
    }
    
    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}