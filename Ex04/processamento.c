#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_NOTAS 4

void calcularMedias(float notas[][NUM_NOTAS], float medias[]) {
    int i, j;

    for (i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;
        for (j = 0; j < NUM_NOTAS; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / NUM_NOTAS;
    }
}

int contarAlunosAprovados(float medias[]) {
    int alunos_aprovados = 0;
    int i;

    for (i = 0; i < NUM_ALUNOS; i++) {
        if (medias[i] >= 7.0) {
            alunos_aprovados++;
        }
    }

    return alunos_aprovados;
}
