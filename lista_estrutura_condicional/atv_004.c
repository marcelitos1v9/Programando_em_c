#include <stdio.h>

int main() {
    char tipoCarro;
    float capacidadeTanque, precoGasolina, precoAlcool, custoAbastecimento;

    precoGasolina = 1.80;
    precoAlcool = 1.00;

    printf("Digite o tipo de carro (G para gasolina ou A para alcool): ");
    scanf(" %c", &tipoCarro);

    printf("Digite a capacidade do tanque em litros: ");
    scanf("%f", &capacidadeTanque);

    if (tipoCarro == 'G' || tipoCarro == 'g') {
        custoAbastecimento = capacidadeTanque * precoGasolina;
    } else if (tipoCarro == 'A' || tipoCarro == 'a') {
        custoAbastecimento = capacidadeTanque * precoAlcool;
    } else {
        printf("Tipo de carro inválido. Por favor, escolha G para gasolina ou A para alcool.\n");
        return 1;
    }

    printf("O custo para encher o tanque do carro é: R$ %.2f\n", custoAbastecimento);

    return 0;
}
