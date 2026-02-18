#include <stdio.h>

int main() {

    float nota;
    int faixa;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    // Convertendo a nota para inteiro
    faixa = (int) nota;
    /*
     * A conversão de um float para um número inteiro,
     * apenas "corta" as casas decimais, ou seja:
     * 8,1 -> 8
     * 8,5 -> 8
     * 8,9 -> 8
     */ 


    switch (faixa) {

        case 10:
        case 9:
            printf("Aluno aprovado com EXCELENCIA!\n");
            break;

        case 8:
        case 7:
            printf("Aluno aprovado.\n");
            break;

        default:
            printf("Aluno reprovado.\n");
            break;
    }

    return 0;
}
