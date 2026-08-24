#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lapis = 4.88;
    float borrachas = 234.54; 
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    printf("%-10s%12.2f\n", "Lapis",     lapis);
    printf("%-10s%12.2f\n", "Borrachas", borrachas);
    printf("%-10s%12.2f\n", "Canetas",   canetas);
    printf("%-10s%12.2f\n", "Cadernos",  cadernos);
    printf("%-10s%12.2f\n", "Fitas",     fitas);

    system("PAUSE");

    return 0;
}
