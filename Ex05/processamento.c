void separarParesImpares(int numeros[], int pares[], int impares[], int tamanho, int* qtdPares, int* qtdImpares) {
    int i;

    *qtdPares = 0;
    *qtdImpares = 0;

    // Separação dos números pares e ímpares
    for (i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            pares[*qtdPares] = numeros[i];
            (*qtdPares)++;
        } else {
            impares[*qtdImpares] = numeros[i];
            (*qtdImpares)++;
        }
    }
}
