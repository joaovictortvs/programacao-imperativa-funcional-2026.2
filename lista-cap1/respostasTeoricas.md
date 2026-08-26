# Respostas Teóricas — Lista Capítulo 1

Q04 — Erros e correção. Erros: `;` sobrando após `#include`; `Main` deveria ser `main` (case-sensitive); `{}` no lugar de `()` nos parâmetros e `()` no lugar de `{}` no corpo; texto do `printf` sem aspas; `cout << endl` é C++, não existe em C.
```c
#include <stdio.h>
#include <stdlib.h>
int main(){ printf("Existem %d semanas no ano.\n", 52); system("PAUSE"); return 0; }
```

Q05 — main() sem includes/return está incorreto em ANSI C. Faltam `#include <stdio.h>` e `<stdlib.h>`, tipo de retorno `int` explícito e `return 0;` ao final.

Q06 — Erros de sintaxe: faltam includes; `main` sem tipo; `b` e `c` declarados sem tipo; `:` no lugar de `;`; string do `printf` não fechada; variável `d` não declarada; falta `return 0;`.
Erros de lógica: 4 argumentos para 3 `%d`; sem espaços entre os `%d`; "0s" no lugar de "Os".

Q07 — Saída (↵=quebra de linha, →=tabulação):
```
a) ↵→Bom dia! Shirley.
b) Você já tomou café? ↵
c) ↵↵A solução não existe!↵Não insista.
d) Duas→linhas→de→saída↵ou→uma?
e) um↵dois↵três↵
```

Q08 — `\n`=quebra de linha, `\t`=tabulação, `\"`=aspas literais (escapadas para não fechar a string). Saída: linha em branco, tab, `"Primeiro programa"`, seguido da mensagem do `system("PAUSE")`.

Q09 — 1ª chamada: `%c` com `'\n'`,`'\t'`,`'\"'` são caracteres válidos → saída correta. 2ª chamada: `printf("%c","\"")` passa uma string (`char*`) para `%c` (espera `char`/`int`) → **comportamento indefinido. Forma certa: `printf("%c", '\"');`. Aspas simples = constante de caractere (valor ASCII); aspas duplas = string/ponteiro.

Q10 — Resposta: b. C é case sensitive: `peso`, `Peso`, `PESO` são 3 variáveis distintas. (a) é errada pois isso é definido pelo padrão da linguagem, não pelo compilador; (c) é errada pois C sempre diferencia maiúsculas/minúsculas.

Q11 — Tabela de constantes:

| Constante | Classificação | Tipo Base |
|---|---|---|
| `\r` | caractere de escape | `char` |
| `2130` | inteira decimal | `int` |
| `-123` | inteira decimal | `int` |
| `33.28` | ponto flutuante | `double` |
| `0XFA` | inteira hexadecimal | `int` |
| `0101` | inteira octal | `int` |
| `2.0e30` | ponto flutuante (exponencial) | `double` |
| `\xDC` | caractere de escape hex | `char` |
| `'\"'` | caractere | `char` |
| `'\\'` | caractere | `char` |
| `'F'` | caractere | `char` |
| `0` | inteira decimal | `int` |
| `'\0'` | caractere nulo | `char` |
| `"F"` | string | `char*` |
| `-4567.89` | ponto flutuante | `double` |

Q12 — Declarações:

| | Status | Justificativa |
|---|---|---|
| a) `int a;` | Correto | tipo básico válido |
| b) `float b;` | Correto | tipo básico válido |
| c) `double float c;` | Incorreto | dois tipos base incompatíveis combinados |
| d) `unsigned char d;` | Correto | modificador válido |
| e) `unsigned e;` | Correto | assume `unsigned int` |
| f) `long float f;` | Incorreto | `long` não combina com `float` |
| g) `long g;` | Correto | assume `long int` |
| h) `long double h;` | Correto | combinação válida |

Q13 — Resposta: c. Headers são arquivos de texto ASCII com protótipos, constantes, macros e tipos — não código binário (a), não fazem linkedição (b), nunca são executados (d).

Q14 — Resposta: a. `#include` instrui o compilador/pré-processador a carregar as declarações da biblioteca antes de compilar. Não faz linkedição (b), não executa nada (c), não gera o `.exe` sozinho (d).

Q15 — Resposta: c. `#include` é diretiva de pré-processador, executada antes da compilação — não é instrução nativa de C (a), não é de OO (b), não é objeto em heap (d).

Q16 — Resposta: c. Diretivas `#` são lidas pelo pré-processador, que altera o código-fonte antes da compilação — não pelo linker (a), processador (b) ou depurador (d).

Q17 — Corretas: a, b, c. Incorreta: d (falta os parênteses). Isso mostra que C é free-form: espaços/tabs/quebras de linha entre tokens não afetam a compilação, desde que os elementos obrigatórios da sintaxe estejam presentes.