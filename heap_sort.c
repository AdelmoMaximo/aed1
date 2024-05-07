#include <stdio.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para fazer a heapificação de uma subárvore enraizada no índice i
void heapify(int arr[], int n, int i) {
    int largest = i;  // Inicializa largest como raiz
    int l = 2 * i + 1;  // left = 2*i + 1
    int r = 2 * i + 2;  // right = 2*i + 2

    // Se o filho esquerdo for maior que a raiz
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // Se o filho direito for maior que o maior até agora
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // Se o maior não for raiz
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // Heapify recursivamente a subárvore afetada
        heapify(arr, n, largest);
    }
}

// Função principal para realizar o Heap Sort
void heapSort(int arr[], int n) {
    // Construir heap (rearranjar array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Um por um extrair um elemento do heap
    for (int i = n - 1; i > 0; i--) {
        // Mover a raiz atual para o fim
        swap(&arr[0], &arr[i]);

        // Chamar max heapify na heap reduzida
        heapify(arr, i, 0);
    }
}

// Função principal para testar o Heap Sort
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    printf("Sorted array is \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
