#include <stdio.h>

int main() {

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("Aluno aprovado com EXCELENCIA!\n");
    } else if (nota >= 7.0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
