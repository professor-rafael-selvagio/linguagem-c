#include <stdio.h>

int main() {

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("Aluno aprovado!\n");
    }

    return 0;
}
