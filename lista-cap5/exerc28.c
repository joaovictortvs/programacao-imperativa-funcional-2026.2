#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, sub, total;
    int qtd, op;
    
    printf("Preco unitario: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &qtd);
    printf("Pagamento (1 - A vista | 2 - Prazo): ");
    scanf("%d", &op);
    printf("Valor pago: ");
    scanf("%f", &pago);
    
    sub = calculaSubtotal(preco, qtd);
    total = aplicaDesconto(sub, op);
    
    printf("\nSubtotal: R$ %.2f\n", sub);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}