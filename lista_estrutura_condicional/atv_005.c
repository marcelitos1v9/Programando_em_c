#include <stdio.h>

int main() {
    int numero, modulo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        modulo = numero;
    } else {
        modulo = -numero;
    }

    printf("O modulo do numero e: %d\n", modulo);

    return 0;
}
