#include "processamento.h"

int calcularDias(struct dma data1, struct dma data2) {
    int dias_total = 0;

    // Considerando todos os meses com 30 dias
    while (data1.dia != data2.dia || data1.mes != data2.mes || data1.ano != data2.ano)
    {
        dias_total++;
        data1.dia++;

        if (data1.dia > 30)
        {
            data1.dia = 1;
            data1.mes++;
        }

        if (data1.mes > 12)
        {
            data1.mes = 1;
            data1.ano++;
        }
    }

    return dias_total;
}
