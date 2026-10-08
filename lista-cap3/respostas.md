Questão 01. Diferenças fundamentais e tempo de avaliação de laços
a) Diferença essencial entre while e do-while
No while, a condição é avaliada antes de cada execução do bloco (laço de pré-teste). Se a condição já for falsa na primeira avaliação, o bloco executa zero vezes.
No do-while, a condição é avaliada depois de cada execução do bloco (laço de pós-teste). O bloco executa no mínimo uma vez, mesmo que a condição seja falsa desde o início.
c
int x = 10;
while (x < 5)  { printf("while\n"); }          // não imprime nada
do             { printf("do-while\n"); } while (x < 5);  // imprime uma vez
b) Quando cada estrutura é a mais adequada
Estrutura	Situações ideais
for	Quando o número de iterações é conhecido ou há uma variável de controle clara (inicialização, teste e passo no mesmo lugar): percorrer de 1 a N, tabelas, vetores, laços aninhados para desenhar padrões.
while	Quando o número de repetições é desconhecido e o bloco pode nem precisar executar: ler dados até uma sentinela, ler até o fim do arquivo, repetir enquanto uma condição externa for verdadeira (ex.: algoritmos como o de Euclides, extração de dígitos de um número).
do-while	Quando o bloco precisa executar pelo menos uma vez: menus interativos, validação de entrada (pedir o dado e repetir se for inválido), "deseja continuar? (s/n)".
c) while (condicao); — erro de compilação ou de lógica?

É um erro de lógica (e não de compilação). O código é sintaticamente válido: o ; forma uma instrução vazia (comando nulo), que passa a ser o corpo do laço. Muitos compiladores apenas emitem um warning (por exemplo, -Wempty-body).

O que acontece se condicao for verdadeira:

A condição é avaliada e resulta em verdadeiro.
O corpo (instrução vazia) executa — ou seja, não faz nada.
A condição é reavaliada. Como nada dentro do laço altera as variáveis envolvidas, ela continua verdadeira.
O programa fica em laço infinito (travado), e o bloco { ... } que o programador escreveu logo abaixo nunca é executado: ele passa a ser um bloco comum, que só rodaria depois do laço (o que nunca acontece).

Se a condição tiver efeito colateral (como while (x++ < 5);), o laço termina normalmente — é o caso da Questão 06.

Questão 02. Escopo e tempo de vida de variáveis de bloco
a) Por que o printf final gera erro?

A variável soma foi declarada dentro do bloco { } do for. O escopo de uma variável de bloco vai da sua declaração até a chave } que fecha o bloco. Quando o printf final é compilado, soma já saiu de escopo e o identificador não existe mais naquele ponto. O compilador emite o erro 'soma' undeclared (identificador não declarado).

b) Por que o valor estaria incorreto mesmo com o printf dentro do laço?

A declaração int soma = 0; fica dentro do corpo do laço, então a cada iteração a variável é criada novamente e reinicializada com 0 (seu tempo de vida termina no fim de cada iteração). Assim, soma += i * i sempre resulta em apenas i * i (1, 4, 9, 16, ...) e nunca acumula os valores das iterações anteriores.

c) Código corrigido
c
#include <stdio.h>

int main() {
    int i;
    int soma = 0;               // declarada FORA do laço: vive durante todo o main

    for (i = 1; i < 10; i++) {
        soma += i * i;          // acumula a cada iteração
    }

    printf("Soma final = %d\n", soma);   // imprime 285
    return 0;
}

(O system("PAUSE") foi removido porque é específico do Windows e desnecessário; se o professor exigir, pode ser mantido antes do return.)

Conceitos:

Visibilidade (escopo): região do código em que um identificador pode ser usado. Em C, uma variável declarada num bloco { } só é visível dentro desse bloco (e nos blocos internos a ele), depois da declaração.
Escopo de bloco: toda variável declarada dentro de chaves pertence àquele bloco. Variáveis com o mesmo nome em blocos internos ocultam as externas.
Tempo de vida: período em que a variável ocupa memória. Uma variável automática (local) é criada quando a execução entra no bloco e destruída quando sai dele; se o bloco for executado de novo, ela é criada novamente (com lixo de memória se não for inicializada, ou com o valor inicial se houver inicialização). Para que o valor persista entre iterações, a variável deve ser declarada em um escopo mais externo (ou ser static).
Questão 03. Flexibilidade do laço for e omissão de expressões
a) Saída do Trecho A
c
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);

a assume 36, 18, 9, 4, 2, 1 e depois 0 (a condição 0 > 0 é falsa e o laço termina). Saída (separada por tabulação):

36	18	9	4	2	1
b) Trecho B
c
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);
Não há inicialização nem incremento; toda a "ação" está no teste. A cada volta o programa lê um caractere do teclado (getch(), função não padrão de <conio.h> que lê sem eco), armazena em ch e compara com 'X'. O laço termina quando o usuário digita X.
ch + 1 calcula o código ASCII seguinte ao do caractere lido; com %c, imprime o próximo caractere da tabela. Por exemplo, digitar A imprime B, digitar a imprime b. É uma "cifra" simples de deslocamento de 1.
Os parênteses em (ch = getch()) são necessários por causa da precedência de operadores: != tem precedência maior que =. Sem parênteses, ch = getch() != 'X' seria interpretado como ch = (getch() != 'X'), e ch receberia apenas 0 ou 1 (resultado da comparação), e não o caractere digitado. Com os parênteses, a atribuição é feita primeiro e o valor atribuído é então comparado com 'X'.
c) Como interromper o laço infinito for (;;)

O laço for (;;) não tem condição de parada (a ausência da expressão de teste equivale a "verdadeiro"). Para interrompê-lo programaticamente, usa-se um desvio dentro do corpo, normalmente condicionado por um if:

break; — sai do laço e continua após ele;
return; (ou return valor;) — encerra a função que contém o laço;
exit(0); — encerra o programa (<stdlib.h>);
goto rotulo; — salta para fora (uso desencorajado).
c
int n = 0;
for (;;) {
    printf("Laço Infinito\n");
    if (++n == 5)
        break;      // sai após 5 repetições
}
Questão 04. Comandos de desvio de fluxo: break vs. continue
a) Ação do break

Ao executar break dentro de um for ou while, o laço é encerrado imediatamente, sem avaliar novamente a condição de teste e sem executar o restante do corpo. A execução continua na primeira instrução após o laço. (O break também encerra um switch.)

b) Ação do continue no for

O continue interrompe somente a iteração atual: o restante do corpo, depois do continue, é ignorado e o fluxo salta para o fim do corpo. No laço for, a terceira expressão (o incremento) é executada imediatamente em seguida; depois disso, a segunda expressão (o teste) é avaliada para decidir se o laço prossegue. A inicialização (primeira expressão) não é executada novamente.

(Em while e do-while, não há incremento no cabeçalho: o continue salta direto para a avaliação da condição.)

c) break em laços aninhados

O break interrompe apenas o laço mais interno (aquele que o contém diretamente). O laço externo continua normalmente com a sua próxima iteração. Para sair dos dois laços é preciso usar uma variável de controle (flag), um return ou um goto.

c
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        if (j == 1) break;      // sai só do for de j
        printf("i=%d j=%d\n", i, j);
    }                           // o for de i segue: imprime para i = 0, 1 e 2
}
Questão 05. Operador vírgula e múltiplas variáveis de controle
c
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
a) Número de iterações

Os pares (i, j) testados são (0,10), (1,9), (2,8), (3,7), (4,6) e (5,5). Nos cinco primeiros i < j é verdadeiro; em (5,5), 5 < 5 é falso e o laço termina. Portanto são executadas 5 iterações.

b) Saída do printf
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

A soma i + j é sempre 10, pois i cresce 1 enquanto j diminui 1 a cada volta.

c) Versão com while
c
int i = 0, j = 10;              // inicialização (antes do laço)
while (i < j) {                 // teste
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++, j--;                   // incremento (no fim do corpo); poderia ser i++; j--;
}
Questão 06. Laço sem corpo e incremento pós-fixado
c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
a) Valor final de x

O programa imprime: Valor final de x = 6.

b) Passo a passo do teste x++ < 5

Com o incremento pós-fixado, a expressão x++ vale o valor antigo de x (usado na comparação) e só depois x é incrementado — inclusive quando a comparação dá falso.

Teste	Valor usado na comparação	Resultado	x após o teste
1º	0 < 5	verdadeiro	1
2º	1 < 5	verdadeiro	2
3º	2 < 5	verdadeiro	3
4º	3 < 5	verdadeiro	4
5º	4 < 5	verdadeiro	5
6º	5 < 5	falso	6

No 6º teste a comparação falha (laço termina), mas o incremento pós-fixado ainda acontece, deixando x = 6. O corpo vazio (;) é executado 5 vezes, sem efeito algum.

c) Reescrita explícita, sem corpo vazio
c
int x = 0;
while (x < 5) {
    x++;                // x vai de 0 até 5
}
x++;                    // incremento extra, que o teste x++ fazia ao falhar
printf("Valor final de x = %d\n", x);   // 6

Alternativa equivalente com do-while:

c
int x = 0;
do {
    x++;
} while (x <= 5);       // para quando x chega a 6
printf("Valor final de x = %d\n", x);   // 6