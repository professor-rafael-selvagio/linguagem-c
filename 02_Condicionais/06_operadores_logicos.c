/*
Operadores Lógicos e de Comparação em C

&&  (E)
Verdadeiro apenas se TODAS as condições forem verdadeiras.

||  (OU)
Verdadeiro se PELO MENOS UMA condição for verdadeira.

==  (Igualdade)
Usado para COMPARAR valores.
Atenção: diferente de = (atribuição).

*/

#include <stdio.h>

int main() {

    int idade;
    int tem_carteira;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui carteira? (1 = sim / 0 = nao): ");
    scanf("%d", &tem_carteira);

    if (idade >= 18 && tem_carteira == 1) {
        printf("Pode dirigir.\n");
    } else {
        printf("Nao pode dirigir.\n");
    }

    return 0;
}
