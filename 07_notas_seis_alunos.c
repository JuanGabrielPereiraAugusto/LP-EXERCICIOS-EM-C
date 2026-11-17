/* 7) Programa que recebe duas notas de seis alunos. Calcula e mostra:
      - a média aritmética das duas notas de cada aluno e a mensagem:
          média menor que 3      -> Reprovado
          média de 3 até menor que 7 -> Exame
          média 7 ou mais        -> Aprovado
      - o total de alunos aprovados, de exame e reprovados;
      - a média da classe. */
#include <stdio.h>

int main(void) {
    float n1, n2, media, somaMedias = 0, mediaClasse;
    int i, aprovados = 0, exames = 0, reprovados = 0;

    for (i = 1; i <= 6; i++) {
        printf("\nAluno %d\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        printf("Media do aluno %d: %.2f - ", i, media);

        if (media < 3) {
            printf("Reprovado\n");
            reprovados++;
        } else if (media < 7) {
            printf("Exame\n");
            exames++;
        } else {
            printf("Aprovado\n");
            aprovados++;
        }

        somaMedias += media;
    }

    mediaClasse = somaMedias / 6;

    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos de exame: %d\n", exames);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Media da classe: %.2f\n", mediaClasse);
    return 0;
}
