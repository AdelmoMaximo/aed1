#include <stdio.h>

// Função para realizar a leitura do vetor
void lerVetor(int tamanho, int vetor[]) {
    int i;
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

// Função para processar o vetor
void processarVetor(int tamanho, int vetor[]) {
    // Realiza a leitura do vetor
    lerVetor(tamanho, vetor);

    // Processamento do vetor
    // Exemplo: dobrar cada elemento
    int i;
    for (i = 0; i < tamanho; i++) {
        vetor[i];
    }
}
