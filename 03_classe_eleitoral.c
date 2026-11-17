/* 3) Programa que recebe a idade de uma pessoa e identifica sua classe eleitoral:
      - não eleitor: menor que 16 anos;
      - eleitor obrigatório: entre 18 e 65 anos;
      - eleitor facultativo: entre 16 e 18 anos (16 e 17) e maior que 65 anos. */
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao eleitor\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatorio\n");
    } else {
        /* sobra: 16 e 17 anos, ou mais de 65 anos */
        printf("Eleitor facultativo\n");
    }
    return 0;
}
