/*
3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[20];
    int matricula;
    char curso[30];
};

int main(){
    struct aluno alunos[5];

    for (int i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        fgets(alunos[i].nome, 20, stdin);
        setbuf(stdin, NULL);

        printf("Digite seu numero de matricula: ");
        scanf("%d", &alunos[i].matricula);
        setbuf(stdin, NULL);

        printf("Digite seu curso: ");
        fgets(alunos[i].curso, 30, stdin);

        printf("\n");
    }

    for (int j = 0; j < 5; j++){
        printf("Nome: %sMatricula: %d\nCurso: %s\n", alunos[j].nome, alunos[j].matricula, alunos[j].curso);
    }

    return 0;
}
