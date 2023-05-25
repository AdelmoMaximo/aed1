#include <stdio.h>

#define MAX_SIZE 100

int verificarQuadradoMagico(int n, int matriz[][MAX_SIZE]) {
    int i, j;
    int soma_principal = 0;
    int soma_secundaria = 0;

    // Calcula a soma dos elementos da diagonal principal e da diagonal secundária
    for (i = 0; i < n; i++) {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][n - i - 1];
    }

    // Verifica se a soma das diagonais principal e secundária são diferentes
    if (soma_principal != soma_secundaria) {
        return 0;
    }

    // Verifica a soma das linhas e colunas
    for (i = 0; i < n; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }

        // Verifica se a soma da linha ou coluna é diferente da soma das diagonais
        if (soma_linha != soma_principal || soma_coluna != soma_principal) {
            return 0;
        }
    }

    // Se todas as somas forem iguais, é um quadrado mágico
    return 1;
}
