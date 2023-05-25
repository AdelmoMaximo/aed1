#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int calcularDias(struct dma data1, struct dma data2);

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dia, mes, ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia, mes, ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int dias = calcularDias(data1, data2);

    printf("O número de dias entre as duas datas é: %d\n", dias);

    return 0;
}
