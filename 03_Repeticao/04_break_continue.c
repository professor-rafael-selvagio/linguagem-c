#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue;  // pula o numero 5
        }

        if (i == 8) {
            break;     // para o loop no 8
        }

        printf("%d\n", i);
    }

    return 0;
}
