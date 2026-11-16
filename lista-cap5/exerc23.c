#include <stdio.h>

#define DOBRO_ERRADO(x) x * 2
#define DOBRO_CERTO(x) ((x) * 2)

int dobro(int x);

int main() {
    /*
     * DOBRO_ERRADO(2+3) vira 2+3*2 = 8 por causa da precedencia da multiplicacao.
     * Na funcao dobro(2+3), a expressao 2+3 eh avaliada antes (vira 5) e depois
     * passada como parametro, resultando em 10.
     */
    printf("Macro sem parenteses: %d\n", DOBRO_ERRADO(2 + 3));
    printf("Funcao: %d\n", dobro(2 + 3));
    printf("Macro corrigida: %d\n", DOBRO_CERTO(2 + 3));
    
    return 0;
}

int dobro(int x) {
    return x * 2;
}