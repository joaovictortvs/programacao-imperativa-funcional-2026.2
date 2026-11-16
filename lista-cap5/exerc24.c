#include <stdio.h>

// Comente a linha abaixo para compilar sem o modo de depuracao
#define DEBUG

int somaAteN(int n);

int main() {
    int n;
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    printf("Soma total: %d\n", somaAteN(n));
    
    return 0;
}

/*
 * Com #define DEBUG ativo: o compilador inclui o printf de dentro do laco,
 * mostrando o passo a passo da soma a cada iteracao.
 * Sem #define DEBUG: o bloco #ifdef eh ignorado no pre-processamento e o
 * programa imprime apenas a soma final.
 */
int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
            printf("[DEBUG] i = %d | soma parcial = %d\n", i, soma);
        #endif
    }
    return soma;
}