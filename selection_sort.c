#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Percorre todos os elementos do array
    for (i = 0; i < n-1; i++) {
        // Encontra o menor elemento no array não ordenado
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Troca o menor elemento encontrado com o primeiro elemento
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Função principal para rodar o código
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Given array is \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    selectionSort(arr, n);
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0;
}
