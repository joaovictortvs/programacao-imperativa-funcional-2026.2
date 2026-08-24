#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    double media;

    printf("Digite um valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);

    media = (valor1 + valor2 + valor3) / 3.0;

    printf("A media aritmetica simples desses valores eh: %.2f\n", media);

    system("PAUSE");
    return 0;
}
