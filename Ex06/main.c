#include <stdio.h>

#define MAX_SIZE 100

void multiplicarMatrizes(int m, int n, int p, float A[][MAX_SIZE], float B[][MAX_SIZE], float C[][MAX_SIZE]);
void imprimirMatriz(int rows, int cols, float matrix[][MAX_SIZE]);

int main() {
    int m, n, p;
    float A[MAX_SIZE][MAX_SIZE];
    float B[MAX_SIZE][MAX_SIZE];
    float C[MAX_SIZE][MAX_SIZE];
    int i, j;

    // Entrada das dimensões e elementos da matriz A
    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Entrada das dimensões e elementos da matriz B
    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &n); // O número de linhas de B é igual ao número de colunas de A
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    // Cálculo do produto de A por B
    multiplicarMatrizes(m, n, p, A, B, C);

    // Impressão da matriz resultante C
    printf("Produto de A por B:\n");
    imprimirMatriz(m, p, C);

    return 0;
}
