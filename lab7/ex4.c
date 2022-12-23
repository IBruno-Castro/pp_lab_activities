/*
4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.
*/

#include <stdio.h>
#include <string.h>

int media(int x, int y, int z){
    return (x + y + z)/3;
}

struct aluno{
    int matricula;
    char nome[20];
    int nota1;
    int nota2;
    int nota3;
};

int main(){
    struct aluno alunos[3];
    int maior, maiorMedia, menorMedia, atualMedia;
    int alunoMaior, alunoMaiorMedia, alunoMenorMedia;

    for (int i = 0; i < 3; i++){
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        fgets(alunos[i].nome, 20, stdin);
        setbuf(stdin, NULL);

        printf("Digite seu numero de matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a nota da primeira prova: ");
        scanf("%d", &alunos[i].nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%d", &alunos[i].nota2);

        printf("Digite a nota da terceira prova: ");
        scanf("%d", &alunos[i].nota3);

        printf("\n");
    }

    maior = alunos[0].nota1;
    maiorMedia = menorMedia = media(alunos[0].nota1, alunos[0].nota2, alunos[0].nota3);
    alunoMaior = alunoMaiorMedia = alunoMenorMedia = 0;

    for(int i = 1; i < 3; i++){
        atualMedia = media(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);

        if (alunos[i].nota1 > maior)
        {
            maior = alunos[i].nota1;
            alunoMaior = i;
        }

        if (atualMedia > maiorMedia)
        {
            maiorMedia = atualMedia;
            alunoMaiorMedia = i;
        }
        
        if (atualMedia < menorMedia)
        {
            menorMedia = atualMedia;
            alunoMenorMedia = i;
        }
        
    }

    fputs(alunos[alunoMaior].nome, stdout);
    fputs(alunos[alunoMaiorMedia].nome, stdout);
    fputs(alunos[alunoMenorMedia].nome, stdout);

    return 0;
}
