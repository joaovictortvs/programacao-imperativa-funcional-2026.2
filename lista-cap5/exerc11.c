#include <stdio.h>

int ehPar(int n);

int main() {
    int num;
    
    printf("Digite um inteiro: ");
    scanf("%d", &num);
    
    if (ehPar(num)) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }
    
    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}