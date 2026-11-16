#include <stdio.h>

int maior(int a, int b);

int main() {
    int n1, n2;
    
    printf("Digite dois inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Maior: %d\n", maior(n1, n2));
    
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}