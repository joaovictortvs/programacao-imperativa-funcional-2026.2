#include <stdio.h>

int somaDigitos(int n);

int main() {
    int num;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    
    printf("Soma dos digitos: %d\n", somaDigitos(num));
    
    return 0;
}

int somaDigitos(int n) {
    // caso base: numero de 1 digito sozinho
    if (n < 10) {
        return n;
    }
    // passo recursivo: pega o ultimo digito com % 10 e chama pro resto com / 10
    return (n % 10) + somaDigitos(n / 10);
}