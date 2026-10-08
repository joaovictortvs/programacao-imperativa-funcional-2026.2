/* Questao 28 - Folha de pagamento com menu continuo (do-while e switch) */
#include <stdio.h>
#include <stdlib.h>

static void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        /* descarta o restante da linha */
    }
}

static double ler_salario(void) {
    double salario;
    int lidos;

    do {
        printf("Informe o salario (R$): ");
        lidos = scanf("%lf", &salario);
        if (lidos == EOF) {
            printf("\nEntrada encerrada.\n");
            exit(1);
        }
        if (lidos != 1) {
            limpar_buffer();
            salario = -1.0;
        }
        if (salario <= 0.0) {
            printf("Salario invalido! Digite um valor positivo.\n");
        }
    } while (salario <= 0.0);

    return salario;
}

int main(void) {
    int opcao, lidos;
    double salario, taxa, valor;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");

        lidos = scanf("%d", &opcao);
        if (lidos == EOF) {
            printf("\nEntrada encerrada.\n");
            return 1;
        }
        if (lidos != 1) {
            limpar_buffer();
            opcao = 0;                   /* opcao invalida */
        }

        switch (opcao) {
            case 1:
                salario = ler_salario();
                taxa = (salario <= 2000.00) ? 0.15 : 0.10;
                valor = salario * (1.0 + taxa);
                printf("Reajuste de %.0f%%: novo salario = R$ %.2f\n", taxa * 100, valor);
                break;

            case 2:
                salario = ler_salario();
                taxa = (salario <= 3000.00) ? 0.08 : 0.15;
                valor = salario * taxa;
                printf("Imposto de Renda (%.0f%%): desconto = R$ %.2f\n", taxa * 100, valor);
                printf("Salario liquido = R$ %.2f\n", salario - valor);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}