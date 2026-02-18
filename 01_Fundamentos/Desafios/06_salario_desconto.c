#include <stdio.h>

int main() {

    float salario, percentual, desconto, liquido;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual);

    desconto = salario * (percentual / 100);
    liquido = salario - desconto;

    printf("Valor do desconto: %.2f\n", desconto);
    printf("Salario liquido: %.2f\n", liquido);

    return 0;
}
