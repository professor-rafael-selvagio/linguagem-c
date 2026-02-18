#include <stdio.h>

int main() {

    float numero;
    int convertido;

    printf("Digite um numero decimal: ");
    scanf("%f", &numero);

    convertido = (int) numero;

    printf("Numero digitado: %.2f\n", numero);
    printf("Convertido para inteiro: %d\n", convertido);

    return 0;
}
