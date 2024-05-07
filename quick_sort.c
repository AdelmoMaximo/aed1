#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Função para encontrar o índice de partição
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // pivot
    int i = (low - 1);  // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor que o pivot
        if (arr[j] < pivot) {
            i++;  // incrementar o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi é o índice de partição, arr[pi] está no lugar certo
        int pi = partition(arr, low, high);

        // Ordenar separadamente os elementos antes e depois da partição
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função principal para testar o Quick Sort
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, 0, n - 1);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
