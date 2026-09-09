#include <stdio.h>

int main() {
    double celsius, fahrenheit, kelvin;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);
    return 0;
}