/*
11. Faça um programa que seja uma agenda de compromissos e:
 Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
 Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.
*/

#include <stdio.h>
#include <string.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct evento
{
    char compromisso[60];
    struct data datas;
};


int main(){
    int m, a;
    struct evento agenda[5];

    for (int i = 0; i < 5; i++){
        scanf("%d %d %d", &agenda[i].datas.dia, &agenda[i].datas.mes, &agenda[i].datas.ano);
        setbuf(stdin, NULL);
        fgets(agenda[i].compromisso, 60, stdin);
    }

    printf("Buscar por eventos em que período? ");
    scanf("%d %d", &m, &a);
    
    for (; m > 0; m--){
        for (int i = 0; i < 5; i++){
            if (agenda[i].datas.mes == m && agenda[i].datas.ano == a){
                fputs(agenda[i].compromisso, stdout);
                printf("%d//%d//%d\n\n", agenda[i].datas.dia, agenda[i].datas.mes, agenda[i].datas.ano);
            }
        }
    }

    return 0;
}