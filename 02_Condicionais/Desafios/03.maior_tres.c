#include <stdio.h>

int main() {
int a, b, c;

printf("Digite o primeiro numero: ");
scanf("%d", &a);

printf("Digite o segundo numero: ");
scanf("%d", &b);

printf("Digite o terceiro numero: ");
scanf("%d", &c);

if (a >= b && a >= c) {
    printf("Maior numero: %d\n", a);
} else if (b >= a && b >= c) {
    printf("Maior numero: %d\n", b);
} else {
    printf("Maior numero: %d\n", c);
}

return 0;


}