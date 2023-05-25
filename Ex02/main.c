#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    // Leitura do vetor
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Impressão do vetor na ordem inversa
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
