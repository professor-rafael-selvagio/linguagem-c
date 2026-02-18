#include <stdio.h>

int main() {

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    // Operador ternario
    nota >= 7.0 
        ? printf("Aluno aprovado!\n")
        : printf("Aluno reprovado!\n");

    return 0;
}
