#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;
    
    printf("Digite dois inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &a, &b);
    
    printf("MDC: %d\n", mdc(a, b));
    simplifica(a, b);
    
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}