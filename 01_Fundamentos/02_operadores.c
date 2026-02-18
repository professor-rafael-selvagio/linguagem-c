#include <stdio.h>

int main() {

    int a = 10;
    int b = 5;

    // Operadores aritméticos
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;

    // Divisão com número decimal
    float divisao_real = (float)a / b;

    printf("=== OPERADORES ARITMETICOS ===\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao inteira: %d\n", divisao);
    printf("Resto da divisao: %d\n", resto);
    printf("Divisao real: %.2f\n\n", divisao_real);

    // Incremento e decremento
    a++;
    b--;

    printf("=== INCREMENTO / DECREMENTO ===\n");
    printf("a apos incremento: %d\n", a);
    printf("b apos decremento: %d\n\n", b);

    // Operadores relacionais
    printf("=== OPERADORES RELACIONAIS ===\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n\n", a != b);

    // Operadores lógicos
    printf("=== OPERADORES LOGICOS ===\n");
    printf("(a > 5) && (b > 0): %d\n", (a > 5) && (b > 0));
    printf("(a > 5) || (b < 0): %d\n", (a > 5) || (b < 0));
    printf("!(a > b): %d\n\n", !(a > b));

    // Operadores de atribuição
    int x = 10;
    x += 5;  // x = x + 5
    printf("=== OPERADORES DE ATRIBUICAO ===\n");
    printf("x apos x += 5: %d\n", x);

    return 0;
}
