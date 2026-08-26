/* #include <stdlib.h>; <- não se termina com ; (erro de sintaxe).

int Main{} <- deveria ser minúsculo (main, c é case sensitive) e deveria ter parênteses e não chaves para os parâmetros da função.

printf(Existem %d semanas no ano., 52); <- não está entre aspas duplas.

cout << end1 <- elementos de outra linguagem (c++) não existe em C. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}