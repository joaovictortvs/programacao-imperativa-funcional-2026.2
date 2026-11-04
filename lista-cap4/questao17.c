#include <stdio.h>

int main() {
    float valor, final, comissao;
    int opcao;
    printf("Valor da compra e opcao (1=A vista, 2=Parcelado): ");
    scanf("%f %d", &valor, &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Total com desconto: R$ %.2f\n", final);
    } else if (opcao == 2) {
        final = valor / 3.0;
        comissao = valor * 0.05;
        printf("Parcela (3x): R$ %.2f\n", final);
    } else {
        printf("Opcao invalida!\n");
        return 0;
    }
    printf("Comissao: R$ %.2f\n", comissao);
    return 0;
}