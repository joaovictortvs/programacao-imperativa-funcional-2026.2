Questão 01. Truncamento de Tipos e Coerção Implícita

a) O valor exibido no console será 2.

b) Isso ocorre porque valor_inteiro é do tipo int, e ao receber o valor 2.97 (do tipo double), o compilador realiza uma conversão implícita de tipos (coerção). Como int não armazena casas decimais, a parte fracionária é simplesmente descartada — sem qualquer arredondamento. Esse fenômeno é chamado de truncamento (ou narrowing conversion).

c) O programador pode controlar esse comportamento explicitamente:

Usando a função round() da biblioteca <math.h> antes de atribuir a um int, caso queira arredondar: valor_inteiro = (int) round(2.97); (resultado: 3).
Mantendo a variável como float ou double caso precise preservar a precisão decimal, evitando a conversão para int.

Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas

a) <conio.h> não faz parte do padrão ANSI C — é uma biblioteca proprietária criada para compiladores DOS/Windows (como o Turbo C/Borland C). Compiladores modernos como o GCC, usados em Linux, macOS e servidores, não a implementam nativamente, o que torna qualquer código que a utilize não portável.

b) As funções equivalentes e padronizadas de <stdio.h> são getchar() (lê um caractere do buffer de entrada) e putchar() (imprime um caractere), além de scanf("%c", ...) e printf("%c", ...).

c)
#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c); // o espaço antes de %c descarta \n e espacos residuais no buffer
    printf("Voce digitou: %c\n", c);
    return 0;
}

Questão 03. Formatação de Saída em Bases Numéricas e ASCII
c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);
    return 0;
}

Questão 04. Operadores de Atribuição Composta e Precedência

Estado inicial: a = 1, b = 2, c = 3, d = 4

Instrução	Cálculo passo a passo	Resultado
a += b + c;	a = 1 + (2 + 3) = 1 + 5	a = 6
b *= c = d + 2;	primeiro c = 4 + 2 = 6; depois b = 2 * 6	b = 12, c = 6
d %= a + a + a;	a já vale 6 → 6+6+6 = 18; d = 4 % 18	d = 4
d -= c -= b -= a;	avaliado da direita p/ esquerda: b = 12 - 6 = 6; c = 6 - 6 = 0; d = 4 - 0 = 4	b = 6, c = 0, d = 4
a += b += c += 7;	c = 0 + 7 = 7; b = 6 + 7 = 13; a = 6 + 13 = 19	a = 19, b = 13, c = 7

Valores finais: a = 19, b = 13, c = 7, d = 4

Questão 05. Avaliação de Expressões Lógicas e Relacionais

Valores: i = 1, j = 2, k = 3, n = 2, x = 3.3, y = 4.4

Expressão	Cálculo	Resultado
a) i < j + 3	1 < 5	1 (verdadeiro)
b) 2*i - 7 <= j - 8	-5 <= -6	0 (falso)
c) -x + y >= 2.0*y	1.1 >= 8.8	0 (falso)
d) x == y	3.3 == 4.4	0 (falso)
e) !(n - j)	!(0)	1 (verdadeiro)
f) !n - j	!n primeiro (!2 = 0), depois 0 - 2	-2
g) i && j && k	todos não-nulos	1 (verdadeiro)
h) i || j - 3 && k	&& tem precedência sobre ||, mas i já é verdadeiro (curto-circuito)	1 (verdadeiro)
i) i < j && 2 >= k	1 && 0	0 (falso)
j) i==2 || j==4 || k==5	0 || 0 || 0	0 (falso)

*Observação sobre (f): diferente das demais, essa expressão não resulta estritamente em 0/1, pois o ! é aplicado apenas a n antes da subtração — o resultado final é o inteiro -2 (que, em um contexto lógico, seria interpretado como verdadeiro por ser diferente de zero).

Questão 06. Comportamento e Precedência dos Incrementos

a)

Trecho A (++n, pré-fixado): o incremento ocorre antes da atribuição. n vira 6 e esse mesmo valor é atribuído a x. Saída: Trecho A: n = 6, x = 6
Trecho B (m++, pós-fixado): o valor atual de m (5) é atribuído a y primeiro, e só depois m é incrementado. Saída: Trecho B: m = 6, y = 5

b) A instrução printf("%d\t%d\t%d\n", n, n+1, n++); é problemática porque modifica n (via n++) enquanto a mesma variável é lida em outros argumentos (n e n+1) dentro da mesma expressão, sem um ponto de sequência entre essas leituras e a escrita. O padrão C não define a ordem de avaliação dos argumentos de uma função, então o compilador é livre para avaliá-los na ordem que quiser. Isso caracteriza comportamento indefinido (undefined behavior): o resultado impresso pode variar dependendo do compilador, da versão dele e até das flags de otimização usadas.