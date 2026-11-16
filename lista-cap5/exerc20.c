#include <stdio.h>

int ehPrimo(int n);

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (ehPrimo(num)) {
        printf("%d eh primo\n", num);
    } else {
        printf("%d nao eh primo\n", num);
    }
    
    printf("Primos de 1 a 50: ");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}