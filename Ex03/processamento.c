#include <stdio.h>

float calcularMedia(int tamanho, float notas[]) {
    float soma = 0;
    int i;

    // Cálculo da soma das notas
    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    // Cálculo da média
    float media = soma / tamanho;

    return media;
}

void exibirNotasEMedia(float notas[], int tamanho, float media) {
    int i;

    // Exibição das notas
    printf("Notas: ");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    // Exibição da média
    printf("Média: %.2f\n", media);
}
