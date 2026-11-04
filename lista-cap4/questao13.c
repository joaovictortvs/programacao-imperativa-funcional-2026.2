#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2;
    printf("Operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Dois numeros: ");
    scanf("%lf %lf", &n1, &n2);

    switch (op) {
        case '+': printf("Resultado: %.2f\n", n1 + n2); break;
        case '-': printf("Resultado: %.2f\n", n1 - n2); break;
        case '*': printf("Resultado: %.2f\n", n1 * n2); break;
        case '/':
            if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
            else printf("Erro: Divisao por zero!\n");
            break;
        case '^': printf("Resultado: %.2f\n", pow(n1, n2)); break;
        default: printf("Operador invalido!\n");
    }
    return 0;
}