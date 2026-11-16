#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int num;
    long fatIt, fatRec;
    
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &num);
    
    fatIt = fatorialIterativo(num);
    fatRec = fatorialRecursivo(num);
    
    printf("Iterativo: %ld\n", fatIt);
    printf("Recursivo: %ld\n", fatRec);
    
    if (fatIt == fatRec) {
        printf("Os resultados coincidem!\n");
    }
    
    return 0;
}

long fatorialIterativo(int n) {
    long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}