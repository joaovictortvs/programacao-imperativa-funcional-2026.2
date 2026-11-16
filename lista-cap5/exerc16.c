#include <stdio.h>

int ehBissexto(int ano);

int main() {
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if (ehBissexto(ano)) {
        printf("%d eh bissexto\n", ano);
    } else {
        printf("%d nao eh bissexto\n", ano);
    }
    
    return 0;
}

int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}