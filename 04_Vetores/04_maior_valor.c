#include <stdio.h>

int main() {

    int numeros[5] = {70, 20, 80, 40, 10};
    int maior;
    maior = numeros[0];

    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);

    return 0;
}
