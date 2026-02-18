#include <stdio.h> // Vamos usar a função printf
#include <stdbool.h> // Inclui a biblioteca que permite usar o tipo bool em C.

int main() {

    // Tipos inteiros
    int idade = 20;
    short ano = 2025;
    long populacao = 210000000;
    unsigned int quantidade = 50;

    // Tipos decimais
    float altura = 1.75f;
    double peso = 72.5;

    // Caracteres
    char letra = 'A';

    // Booleano
    bool aprovado = true;

    // Constante
    const float PI = 3.14159;

    printf("=== TIPOS DE VARIAVEIS EM C ===\n\n");

    printf("int idade: %d\n", idade);
    printf("short ano: %d\n", ano);
    printf("long populacao: %ld\n", populacao);
    printf("unsigned int quantidade: %u\n", quantidade);

    printf("\nfloat altura: %.2f\n", altura);
    printf("double peso: %.2lf\n", peso);

    printf("\nchar letra: %c\n", letra);
    printf("bool aprovado: %d\n", aprovado);

    printf("\nConstante PI: %.5f\n", PI);

    printf("\n=== TAMANHO EM BYTES ===\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));

    return 0;
}
