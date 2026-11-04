#include <stdio.h>

int main() {
    int op;
    printf("1 - Saldo\n2 - Extrato\n3 - Transferencia\n4 - Atendente\nOpcao: ");
    scanf("%d", &op);

    switch (op) {
        case 1: printf("Saldo...\n"); break;
        case 2: printf("Extrato...\n"); break;
        case 3: printf("Transferencia...\n"); break;
        case 4: printf("Chamando atendente...\n"); break;
        default: printf("Opcao invalida!\n");
    }
    return 0;
}