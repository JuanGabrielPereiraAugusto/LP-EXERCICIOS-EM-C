/* 8) Usando while, programa que recebe uma sequência de números inteiros do usuário
      e calcula a média apenas dos números pares. A entrada para quando o usuário digitar zero. */
#include <stdio.h>

int main(void) {
    int numero, somaPares = 0, qtdPares = 0;

    printf("Digite um numero inteiro (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            somaPares += numero;
            qtdPares++;
        }
        printf("Digite um numero inteiro (0 para encerrar): ");
        scanf("%d", &numero);
    }

    if (qtdPares > 0) {
        printf("Media dos numeros pares: %.2f\n", (float) somaPares / qtdPares);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }
    return 0;
}
