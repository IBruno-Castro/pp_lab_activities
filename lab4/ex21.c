/*
21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
*/

#include <stdio.h>

void exclamacao(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main(){
    int num;

    printf("Digite quantos linhas de ponto de exclamacao: ");
    scanf("%d", &num);

    exclamacao(num);

    return 0;
}