#include <stdio.h>

// Função para processar o vetor
void processarVetor(int tamanho, int vetor[]);

int main() {
    int vetor[5];
    int i;

    // Chama a função de processamento definida em processamento.c
    processarVetor(5, vetor);

    // Impressão do vetor processado
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
