/* 4) Programa que recebe três notas de um aluno, calcula e mostra a média aritmética
      e a mensagem: Reprovado (média < 6) ou Aprovado (média >= 6). */
#include <stdio.h>

int main(void) {
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media aritmetica: %.2f\n", media);
    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
