#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd;
    
    printf("Quantidade de termos: ");
    scanf("%d", &qtd);
    
    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

/*
 * A recursao aqui fica lenta para valores grandes porque recalcula os mesmos
 * termos varias vezes (ex: fibonacci(5) chama fibonacci(4) e fibonacci(3), e
 * fibonacci(4) chama fibonacci(3) de novo), gerando um crescimento exponencial.
 */
long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}