#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, exp;
    
    printf("Base e expoente: ");
    scanf("%d %d", &base, &exp);
    
    if (exp < 0) {
        printf("O expoente deve ser nao negativo.\n");
    } else {
        printf("Resultado: %ld\n", potencia(base, exp));
    }
    
    return 0;
}

long potencia(int base, int expoente) {
    // caso base: todo numero elevado a 0 vale 1
    if (expoente == 0) {
        return 1;
    }
    // passo recursivo: multiplica a base pela potencia com expoente reduzido
    return (long)base * potencia(base, expoente - 1);
}