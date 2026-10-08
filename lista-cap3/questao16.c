/* Questao 16 - Autenticacao com no maximo 3 tentativas */
#include <stdio.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main(void) {
    int tentativa, senha;

    for (tentativa = 1; tentativa <= MAX_TENTATIVAS; tentativa++) {
        printf("Tentativa %d de %d - digite a senha: ", tentativa, MAX_TENTATIVAS);
        if (scanf("%d", &senha) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
                /* descarta entrada invalida */
            }
            if (c == EOF) break;
            senha = -1;                    /* conta como tentativa errada */
        }

        if (senha == SENHA_SECRETA) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            return 0;
        }
        printf("Senha incorreta.\n");
    }

    printf("Conta Bloqueada por Segurança!\n");
    return 1;
}