# 💻 Linguagem de Programação — Exercícios em C

Exercícios resolvidos em **linguagem C** para a disciplina de **Linguagem de Programação** na **Fatec Taquaritinga**: entrada e saída de dados, operações matemáticas, **estruturas de decisão**, **laços de repetição**, **vetores** e **matrizes**.

📄 **Documento com todas as respostas:** [`Respostas_Exercicios_em_C.docx`](Respostas_Exercicios_em_C.docx)

---

## 📋 Exercícios

| # | Arquivo | O que faz | Conceitos |
|:---:|---|---|---|
| 1 | [`01_media_quatro_notas.c`](01_media_quatro_notas.c) | Média aritmética de 4 notas | `scanf`, `printf`, operações |
| 2 | [`02_aumento_de_salario.c`](02_aumento_de_salario.c) | Valor do aumento e novo salário | Cálculo de porcentagem |
| 3 | [`03_classe_eleitoral.c`](03_classe_eleitoral.c) | Classe eleitoral pela idade | `if / else if / else`, operadores lógicos |
| 4 | [`04_media_tres_notas_aprovacao.c`](04_media_tres_notas_aprovacao.c) | Média de 3 notas: Aprovado ou Reprovado | Decisão simples |
| 5 | [`05_matriz_3x4.c`](05_matriz_3x4.c) | Pares, soma dos ímpares e média de uma matriz | Matriz, `for` aninhado, `%` |
| 6 | [`06_vetor_ordenado.c`](06_vetor_ordenado.c) | Copia 10 números para outro vetor e ordena | Vetores, ordenação (bolha) |
| 7 | [`07_notas_seis_alunos.c`](07_notas_seis_alunos.c) | Situação de 6 alunos, totais e média da classe | `for`, contadores, acumuladores |
| 8 | [`08_media_dos_pares_while.c`](08_media_dos_pares_while.c) | Média dos números pares até digitar 0 | `while` com sentinela |

---

## 🧠 Regras usadas

**Questão 3 — Classe eleitoral**

| Idade | Classe |
|---|---|
| Menor que 16 | Não eleitor |
| 16 e 17 | Eleitor facultativo |
| 18 a 65 | Eleitor obrigatório |
| Maior que 65 | Eleitor facultativo |

**Questão 7 — Situação do aluno**

| Média | Mensagem |
|---|---|
| Menor que 3 | Reprovado |
| De 3 até menor que 7 | Exame |
| 7 ou mais | Aprovado |

**Questão 8:** se nenhum número par for digitado, o programa avisa em vez de dividir por zero.

---

## 💡 Exemplo — Questão 8

```c
while (numero != 0) {
    if (numero % 2 == 0) {
        somaPares += numero;
        qtdPares++;
    }
    printf("Digite um numero inteiro (0 para encerrar): ");
    scanf("%d", &numero);
}
```

---

## 🚀 Como compilar e executar

Com o **GCC** instalado (MinGW no Windows, ou nativo no Linux):

```bash
gcc 05_matriz_3x4.c -o matriz
./matriz
```

Também dá para rodar online, sem instalar nada, em sites como [onlinegdb.com](https://www.onlinegdb.com/online_c_compiler) ou [onecompiler.com/c](https://onecompiler.com/c).

---

## 🎓 Informações acadêmicas

| | |
|---|---|
| **Instituição** | Fatec Taquaritinga |
| **Curso** | Análise e Desenvolvimento de Sistemas |
| **Disciplina** | Linguagem de Programação |
| **Professor** | Rogério Aparecido Pereira Bolin |
| **Ano** | 2025 |

## 👤 Autor

**Juan Gabriel Pereira Augusto**
GitHub: [@JuanGabrielPereiraAugusto](https://github.com/JuanGabrielPereiraAugusto)
