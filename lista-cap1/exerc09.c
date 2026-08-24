#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"'); /*%c  espera receber um char | \n quebra linha | \t tabulação horizontal | \ imprime aspas duplas | Imprime "Primeiro programa" */
    printf("%c", "\""); /*está passando um ponteiro (endereço de memória da string) para um especificador que espera um inteiro/caractere -> erro de incopatibilidade de tipos*/
    system("PAUSE"); /* Exibe uma mensagem "Pressione qualquer tecla para continuar"*/
    return 0;
}