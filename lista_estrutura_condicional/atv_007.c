
#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float vendas;

    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);

    printf("Digite o valor das vendas do mes: R$ ");
    scanf("%f", &vendas);

    if (vendas >= 10000.00 && vendas <= 50000.00) {
        printf("Parabens, %s! As suas vendas estao dentro do intervalo esperado.\n", nome);
    } else {
        printf("Desculpe, %s. O valor das suas vendas nao esta dentro do intervalo esperado.\n", nome);
    }

    return 0;
}
