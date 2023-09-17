#include <stdio.h>

int main() {
    int CT_cm, LT_cm, CP_m, LP_m, QTD;

    // Solicita ao usu�rio as dimens�es do tijolo em centimetros
    printf("Digite o comprimento do tijolo em centimetros: ");
    scanf("%d", &CT_cm);
    printf("Digite a largura do tijolo em centimetros: ");
    scanf("%d", &LT_cm);

    // Solicita ao usu�rio as dimens�es da parede em metros
    printf("Digite o comprimento da parede em metros: ");
    scanf("%d", &CP_m);
    printf("Digite a largura da parede em metros: ");
    scanf("%d", &LP_m);

    // Calcula a quantidade de tijolos necess�rios
    QTD = ((CP_m * 100) / CT_cm) * ((LP_m * 100) / LT_cm);

    // Exibe a quantidade de tijolos necess�rios
    printf("A quantidade de tijolos necessarios e: %d\n", QTD);

    return 0;
}
