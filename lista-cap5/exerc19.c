#include <stdio.h>

void contagemRegressiva(int n);
void contagemProgressiva(int n);

int main() {
    int n;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Valor invalido\n");
        return 0;
    }
    
    contagemRegressiva(n);
    printf("\n");
    contagemProgressiva(n);
    printf("\n");
    
    return 0;
}

void contagemRegressiva(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d ", n);
    contagemRegressiva(n - 1);
}

/*
 * Ao colocar a chamada recursiva ANTES do printf, o programa empilha todas as
 * chamadas ate chegar em 0 e so imprime na hora que esta desempilhando,
 * invertendo a ordem para 1 ate n.
 */
void contagemProgressiva(int n) {
    if (n == 0) {
        return;
    }
    contagemProgressiva(n - 1);
    printf("%d ", n);
}