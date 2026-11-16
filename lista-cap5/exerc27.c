#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int op;
    float temp;
    
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Opcao: ");
    scanf("%d", &op);
    
    printf("Temperatura: ");
    scanf("%f", &temp);
    
    switch (op) {
        case 1:
            printf("Resultado: %.2f F\n", celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("Resultado: %.2f K\n", celsiusParaKelvin(temp));
            break;
        case 3:
            printf("Resultado: %.2f C\n", fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("Resultado: %.2f C\n", kelvinParaCelsius(temp));
            break;
        default:
            printf("Opcao invalida\n");
    }
    
    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}