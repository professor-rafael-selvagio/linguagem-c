#include <stdio.h>

int main() {

    int quantidade;
    float nota, soma = 0;

    printf("Quantas notas deseja inserir? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("Media final: %.2f\n", soma / quantidade);

    return 0;
}
