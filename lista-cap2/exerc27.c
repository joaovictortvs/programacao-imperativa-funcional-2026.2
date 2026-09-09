#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa a semente com o tempo atual

    int dado1 = rand() % 6 + 1; // resultado sempre entre 1 e 6
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);
    return 0;
}