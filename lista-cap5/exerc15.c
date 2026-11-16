#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float n1, n2, n3, med;
    
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    med = mediaPonderada(n1, n2, n3);
    printf("Media: %.2f - ", med);
    exibeSituacao(med);
    
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}