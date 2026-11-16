#include <stdio.h>

void exibeMenu(void);

int main() {
    int op;
    
    exibeMenu();
    printf("Opcao: ");
    scanf("%d", &op);
    
    switch (op) {
        case 1:
            printf("Cadastrando...\n");
            break;
        case 2:
            printf("Listando...\n");
            break;
        case 3:
            printf("Removendo...\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    
    return 0;
}

void exibeMenu(void) {
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}