#include <stdio.h>

int main() {
    float R_CM, VOL;

    printf("Digite o raio da esfera em centimetros: ");
    scanf("%f", &R_CM);

    VOL =  3.14 * (R_CM * R_CM);

    printf("O volume da esfera e: %.2f cm^3\n", VOL);

    return 0;
}
