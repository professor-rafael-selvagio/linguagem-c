#include <stdio.h>

int main() {

    int numero;

    do {
        printf("Digite um numero positivo (0 para sair): ");
        scanf("%d", &numero);

    } while (numero != 0);

    printf("Programa encerrado.\n");

    return 0;
}
