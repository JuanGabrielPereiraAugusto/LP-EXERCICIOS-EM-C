/* 6) Programa que lê um vetor de 10 números, coloca os elementos em ordem crescente
      num segundo vetor e mostra os valores ordenados. */
#include <stdio.h>

int main(void) {
    int vetor[10], ordenado[10];
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    /* copia o vetor original para o segundo vetor */
    for (i = 0; i < 10; i++) {
        ordenado[i] = vetor[i];
    }

    /* ordena o segundo vetor em ordem crescente (método da bolha) */
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (ordenado[j] > ordenado[j + 1]) {
                aux = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = aux;
            }
        }
    }

    printf("Valores em ordem crescente: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ordenado[i]);
    }
    printf("\n");
    return 0;
}
