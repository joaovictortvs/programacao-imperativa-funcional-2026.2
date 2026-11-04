## Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade
* **a)** `if (x = 0)` faz uma **atribuição**: o zero vai pra dentro da variável `x`, e como o resultado da expressão é zero, o `if` acha que é falso e o bloco **não roda**. Já o `if (x == 0)` só **compara** se o `x` já é zero, sem alterar nada.
* **b)** Em C, o número **`0`** é considerado **falso**, e **qualquer outro valor** (positivo ou negativo) é **verdadeiro**.
* **c)** O código `if (x = -5)` vai atribuir `-5` a `x`. Como `-5` é diferente de zero, a condição é **verdadeira**, então o bloco **vai ser executado** e o `x` fica com `-5`.

---

## Questão 02. Associação do Comando else e Aninhamento de Decisões
* **a)** Vai imprimir **`Opção B`**. O `x` é 15 (passa no primeiro `if`), mas o `y` é 5 (falha no segundo `if`). Como o `else` tá grudado no segundo `if`, ele imprime o B.
* **b)** A regra do *dangling-else*: sem chaves, o `else` sempre vai pertencer ao **`if` mais próximo** que ainda não tem um `else`.
* **c)** Com chaves fica assim:
  ```c
  int x = 15, y = 5;
  if (x > 10) {
      if (y > 10) {
          printf("Opção A\n");
      }
  } else {
      printf("Opção B\n");
  }

Questão 03. Operador Condicional Ternário vs. Estrutura if-else
a) Ele testa se a média é maior ou igual a 7. Se for, bota 'A', senão bota 'R'. Para media = 6.8, vai cair no falso, então o situacao recebe 'R'.

b) Com if-else:

media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through
a) A saída vai ser:
Prata
Ouro

Isso acontece porque faltou o break no case 2, então o programa continuou rodando direto para o case 3 (fenômeno fall-through).

b) O break serve para parar a execução do switch. Quando a gente esquece, rola o fall-through, que é quando o código vaza e executa os cases debaixo sem testar nada.

c) Só dá pra usar tipos inteiros (int, char, etc.). Não pode usar float ou double porque ponto flutuante tem problema de arredondamento e não rola nas tabelas de salto do compilador.

Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos

a) A saída é a = 0, b = 5, c = 8. O incremento ++b foi ignorado. Como a = 0, o primeiro teste do && já deu falso, e por causa do curto-circuito o resto nem é olhado. Cai direto no else e subtrai 2 de c.

b)
&&: Se o primeiro for falso, corta ali mesmo (curto-circuito) porque o resultado geral já era.

||: Se o primeiro for verdadeiro, corta ali porque já garantiu que é verdadeiro.

c) Se a condição fosse if (a == 0 || ++b > 5), o a == 0 já é verdadeiro logo de cara. O curto-circuito corta o ++b, então o b continua 5, e o c ganha 10, virando 20.

Questão 06. Construções else-if e Análise Lógica de Intervalos

a) Para idade = 65, vai imprimir:
Idoso
Adulto
Jovem

Imprime tudo isso porque são três if separados, então ele testa todos e executa os que derem verdadeiro (65 é maior que 60, 18 e 12).

b) if separados rodam todos independentemente. A cadeia else-if para na primeira que der certo e pula o resto.

c) Do jeito certo com else-if:

int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}