#include <stdio.h>

int soma(int a, int b);

int main() {
    int n1, n2;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Soma: %d\n", soma(n1, n2));
    
    return 0;
}

int soma(int a, int b) {
    return a + b;
}