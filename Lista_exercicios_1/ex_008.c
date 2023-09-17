#include <stdio.h>

int main() {
    int HE, ME, HS, MS; // Hora e minuto de entrada e saída
    float PAG; // Valor a ser pago

    printf("Digite a hora de entrada: ");
    scanf("%d", &HE);

    printf("Digite o minuto de entrada: ");
    scanf("%d", &ME);

    printf("Digite a hora de saida: ");
    scanf("%d", &HS);

    printf("Digite o minuto de saida: ");
    scanf("%d", &MS);

    // Calcula o tempo de estacionamento em minutos
    int tempoEntrada = HE * 60 + ME;
    int tempoSaida = HS * 60 + MS;
    int tempoEstacionado = tempoSaida - tempoEntrada;

    // Calcula o valor a ser pago
    if (tempoEstacionado <= 60) {
        PAG = 4.00; // Até 1 hora, paga-se R$ 4,00
    } else {
        // Para mais de 1 hora, calcula as horas completas e as frações de hora
        int horasCompletas = tempoEstacionado / 60;
        int minutosRestantes = tempoEstacionado % 60;

        if (minutosRestantes > 0) {
            horasCompletas++; // Arredonda para a próxima hora completa
        }

        PAG = 4.00 + (horasCompletas - 1) * 1.00; // R$ 4,00 pela primeira hora, R$ 1,00 por hora adicional
    }

    printf("O valor a ser pago pelo estacionamento e: R$ %.2f\n", PAG);

    return 0;
}
