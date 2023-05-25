#include <stdio.h>

#define MAX_SIZE 100

int verificarQuadradoMagico(int n, int matriz[][MAX_SIZE]);

int main() {
    int n;
    int matriz[MAX_SIZE][MAX_SIZE];
    int i, j;

    // Entrada da dimensão e elementos da matriz
    printf("Digite a dimensão da matriz quadrada: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação se a matriz é um quadrado mágico
    int resultado = verificarQuadradoMagico(n, matriz);

    // Impressão do resultado
    if (resultado) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
