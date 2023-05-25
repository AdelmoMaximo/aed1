#include <stdio.h>

float calcularMedia(int tamanho, float notas[]);
void exibirNotasEMedia(float notas[], int tamanho, float media);

int main() {
    float notas[4];
    int i;

    // Leitura das notas
    for (i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
    }

    // Chamada da função de processamento
    float media = calcularMedia(4, notas);

    // Exibição das notas e da média
    exibirNotasEMedia(notas, 4, media);

    return 0;
}

