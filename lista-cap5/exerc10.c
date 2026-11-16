#include <stdio.h>

#define PI 3.14159

float area(float r);

int main() {
    float raio;
    
    printf("Raio da esfera: ");
    scanf("%f", &raio);
    
    printf("Area: %.2f\n", area(raio));
    
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}