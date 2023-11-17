#include <stdio.h>

//esse codigo me levou horas

int main() {
    int idade, totalPessoas = 0;
    char opiniao, continuar;

    float somaIdades = 0;
    int contadorOtimo = 0, contadorBom = 0, contadorRegular = 0, contadorRuim = 0, contadorPessimo = 0;

    printf("Digite a idade do espectador: ");
    scanf("%d", &idade);

    while (idade >= 0) {
        printf("Digite a opiniao do espectador (A - otimo, B - Bom, C - Regular, D - Ruim, E - Pessimo): ");
        scanf(" %c", &opiniao);

        while (opiniao != 'A' && opiniao != 'B' && opiniao != 'C' && opiniao != 'D' && opiniao != 'E') {
            printf("Opiniao invalida. Por favor, digite novamente: ");
            scanf(" %c", &opiniao);
        }

        if (opiniao == 'A') {
            contadorOtimo++;
        } else if (opiniao == 'B') {
            contadorBom++;
        } else if (opiniao == 'C') {
            contadorRegular++;
        } else if (opiniao == 'D') {
            contadorRuim++;
        } else if (opiniao == 'E') {
            contadorPessimo++;
        }

        somaIdades += idade;
        totalPessoas++;

        printf("Existe outro espectador? (S para Sim, qualquer outra tecla para Encerrar): ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }

        printf("Digite a idade do proximo espectador: ");
        scanf("%d", &idade);
    }

    float mediaIdade = somaIdades / totalPessoas;

    float porcentagemOtimo = (float) contadorOtimo / totalPessoas * 100;
    float porcentagemBom = (float) contadorBom / totalPessoas * 100;
    float porcentagemRegular = (float) contadorRegular / totalPessoas * 100;
    float porcentagemRuim = (float) contadorRuim / totalPessoas * 100;
    float porcentagemPessimo = (float) contadorPessimo / totalPessoas * 100;

    printf("\nResultado da pesquisa:\n");
    printf("Quantidade de pessoas que responderam a pesquisa: %d\n", totalPessoas);
    printf("Media de idade das pessoas que responderam a pesquisa: %.2f\n", mediaIdade);
    printf("Porcentagem de otimo: %.2f%%\n", porcentagemOtimo);
    printf("Porcentagem de bom: %.2f%%\n", porcentagemBom);
    printf("Porcentagem de regular: %.2f%%\n", porcentagemRegular);
    printf("Porcentagem de ruim: %.2f%%\n", porcentagemRuim);
    printf("Porcentagem de pessimo: %.2f%%\n", porcentagemPessimo);

    return 0;
}
