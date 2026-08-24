#include <stdio.h>  
#include <stdlib.h> 

int main(void)
{
    system("chcp 437");

    /* ---------- Carro ---------- */
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDF O \xDF\xDF\xDF\xDF\xDF O \xDF\n");

    printf("\n");

    /* ---------- Caminhonete ---------- */
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n"); 
    printf("\xDF O \xDF\xDF\xDF\xDF\xDF O O \xDF\n");

    system("PAUSE");

    return 0;
}