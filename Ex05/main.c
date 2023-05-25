#include <stdio.h>

#define TAMANHO_VETOR 20

void separarParesImpares(int numeros[], int pares[], int impares[], int tamanho, int* qtdPares, int* qtdImpares);

int main() {
    int numeros[TAMANHO_VETOR];
    int pares[TAMANHO_VETOR];
    int impares[TAMANHO_VETOR];
    int qtdPares, qtdImpares;
    int i;

    // Leitura dos números
    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chamada da função para separar pares e ímpares
    separarParesImpares(numeros, pares, impares, TAMANHO_VETOR, &qtdPares, &qtdImpares);

    // Impressão dos vetores
    printf("\nNúmeros digitados: ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nNúmeros pares: ");
    for (i = 0; i < qtdPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNúmeros ímpares: ");
    for (i = 0; i < qtdImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}
