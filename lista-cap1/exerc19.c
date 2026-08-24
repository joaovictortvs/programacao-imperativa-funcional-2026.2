#include <stdio.h>
#include <stdlib.h>

void funcaoTabulacaoCascata(char *palavra1, char *palavra2, char *palavra3){
    printf("%s\n\t%s\n\t\t%s\n", palavra1, palavra2, palavra3);
};

int main()
{
    funcaoTabulacaoCascata("um", "dois", "tres");
    return 0;
}
