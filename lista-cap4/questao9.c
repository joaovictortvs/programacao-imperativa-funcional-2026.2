#include <stdio.h>

int main() {
    float lab, sem, final, media;
    printf("Digite lab, sem e final: ");
    scanf("%f %f %f", &lab, &sem, &final);

    media = (lab * 2 + sem * 3 + final * 5) / 10.0;
    printf("Media: %.2f\n", media);

    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 5.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Aprovado\n");
    }
    return 0;
}