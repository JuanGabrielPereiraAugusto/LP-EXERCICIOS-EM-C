/* 5) Programa que preenche uma matriz 3 x 4, calcula e mostra:
      - a quantidade de elementos pares;
      - a soma dos elementos ímpares;
      - a média de todos os elementos. */
#include <stdio.h>

int main(void) {
    int matriz[3][4];
    int i, j;
    int qtdPares = 0, somaImpares = 0, somaTotal = 0;
    float media;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0) {
                qtdPares++;
            } else {
                somaImpares += matriz[i][j];
            }
            somaTotal += matriz[i][j];
        }
    }

    media = somaTotal / 12.0;

    printf("Quantidade de elementos pares: %d\n", qtdPares);
    printf("Soma dos elementos impares: %d\n", somaImpares);
    printf("Media de todos os elementos: %.2f\n", media);
    return 0;
}
