#include <stdio.h>

#define MAX_SIZE 100

void multiplicarMatrizes(int m, int n, int p, float A[][MAX_SIZE], float B[][MAX_SIZE], float C[][MAX_SIZE]) {
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int rows, int cols, float matrix[][MAX_SIZE]) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}
