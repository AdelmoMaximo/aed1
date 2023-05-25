#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_NOTAS 4

// Declaração antecipada das funções
void calcularMedias(float notas[][NUM_NOTAS], float medias[]);
int contarAlunosAprovados(float medias[]);

int main() {
    float notas[NUM_ALUNOS][NUM_NOTAS];
    float medias[NUM_ALUNOS];
    int alunos_aprovados = 0;
    int i, j;

    // Entrada das notas dos alunos
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (j = 0; j < NUM_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    // Chamada das funções
    calcularMedias(notas, medias);
    alunos_aprovados = contarAlunosAprovados(medias);

    // Impressão das médias e número de alunos aprovados
    printf("Médias dos alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, medias[i]);
    }
    printf("\n");
    printf("Número de alunos com média igual ou superior a 7: %d\n", alunos_aprovados);

    return 0;
}
