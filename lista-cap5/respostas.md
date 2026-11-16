# Lista de Exercícios - Cap 5 (Funções)

Questão 01
a) 
- Protótipo: `float celsius(float);` -> Avisa ao compilador que essa função existe e qual tipo ela recebe e retorna.
- Chamada: `c = celsius(f);` -> Executa a função passando o valor de `f` e guarda o resultado em `c`.
- Definição: `float celsius(float fahr) { ... }` -> É a implementação da função em si, onde o cálculo acontece.

b) O protótipo serve para o compilador validar os tipos antes da função ser chamada. Se a gente omitir e deixar a função embaixo da `main()`, o compilador assume por padrão que o retorno é `int` e não checa os argumentos direito, o que gera erro de compilação ou bug na execução.

c) O tipo dela é `float`. Em C, o tipo da função define o que vai sair dela no `return`, e não o que entra nos parâmetros (ela pode receber vários tipos diferentes, mas só devolve um).

Questão 02
a) Apenas 1 valor. O programador tentou devolver dois usando vírgula (`return soma, media;`), mas em C o operador vírgula avalia a primeira expressão, descarta e retorna só a última (`media`).

b) O `return;` vazio numa função `void` força a saída imediata da função (tipo um `break`, só que pra função). No final dela não precisa colocar porque ela já encerra sozinha quando chega na última chave `}`.

c) Como o `return` só devolve um dado por vez, precisamos quebrar em duas funções: uma pra somar e outra pra fazer a média (a menos que a gente usasse ponteiros, o que não é o caso aqui).

Questão 03
a)
- `void exibe_mensagem (char* msg);` -> Recebe parâmetro (string), não retorna nada (`void`).
- `int obter_codigo(void);` -> Não recebe nada, retorna um `int`.
- `void limpar_tela(void);` -> Não recebe nada e não retorna nada.

b) Função com retorno devolve um valor que você pode guardar numa variável ou usar num `printf` ou `if`. O procedimento (`void`) só executa uma tarefa na tela ou na memória sem devolver nada. Exemplo: calcular imposto é função com retorno; imprimir um menu é procedimento.

c) Não funciona. `limpar_tela()` é `void`, então não tem valor nenhum ali para ser atribuído na variável `x`. Vai dar erro de compilação.

Questão 04
a)
- Caso base: `n == 0` (retorna 1).
- Passo recursivo: `(long)n * fatorial(n - 1)`.
Se tirar o caso base, a função entra em loop infinito chamando ela mesma até estourar a memória da pilha (stack overflow) e o programa fechar sozinho.

b) Rastreamento de `fatorial(4)`:
- Empilhando:
  - `fatorial(4)` -> trava esperando `4 * fatorial(3)`
  - `fatorial(3)` -> trava esperando `3 * fatorial(2)`
  - `fatorial(2)` -> trava esperando `2 * fatorial(1)`
  - `fatorial(1)` -> trava esperando `1 * fatorial(0)`
  - `fatorial(0)` -> bate no caso base e retorna `1`
- Desempilhando:
  - `fatorial(1)` resolve `1 * 1 = 1`
  - `fatorial(2)` resolve `2 * 1 = 2`
  - `fatorial(3)` resolve `3 * 2 = 6`
  - `fatorial(4)` resolve `4 * 6 = 24`

c) Cada vez que a função chama ela mesma, o sistema cria um bloco novo na pilha de memória (call stack) pra guardar as variáveis locais e saber pra onde voltar depois. Sem caso base, a pilha enche até passar do limite de memória do programa.

Questão 05
a)
- `SQR(2+3)` vira `((2+3)*(2+3))` -> `5 * 5` = 25.
- `DOBRO(2+3)` vira `2+3*2` -> como a multiplicação vem antes na matemática, faz `3*2` primeiro e soma 2, dando 8. Faltaram parênteses em volta do `x` na macro `DOBRO`.

b)`#define` não é comando em C, é diretiva de pré-processador (ele só dá um "ctrl+c / ctrl+v" no texto antes de compilar). Se botar `;`, ele cola o ponto e vírgula junto e quebra o código. Usamos maiúsculo por padrão só pra bater o olho e saber que é constante/macro e não variável.

c) O erro em `#define PRN (n)` é o espaço entre `PRN` e `(n)`. O pré-processador acha que o parâmetro faz parte do texto a ser substituído. O certo é `#define PRN(n) printf("%d", n)`. A diferença pra função é que a macro cola o código direto no lugar da chamada (mais rápido, mas não checa tipo de variável), enquanto a função faz o desvio na memória.

Questão 06
a) `<stdio.h>` procura o arquivo nas pastas padrão do compilador/sistema. `"areas.h"` procura primeiro na mesma pasta onde está o nosso arquivo `.c`.

b) `#undef SOMA` apaga a definição da macro `SOMA` dali pra frente no código. Não se usa `#undef SOMA(x,y)` porque para remover basta passar o nome dela, sem os argumentos.

c) Vai imprimir `"Modo normal"`. Essa checagem acontece no **pré-processamento**, antes mesmo do compilador gerar o código de máquina. O bloco que não entra na condição é literalmente apagado pelo pré-processador, por isso não vai pro `.exe` final.