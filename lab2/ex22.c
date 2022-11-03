/*
22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h>

int main(){
    float idade, tempoServico;

    printf("Digite a idade e o tempo de servico:  ");
    scanf("%f %f", &idade, &tempoServico);

    if(idade > 64 || tempoServico > 29 || tempoServico > 25 && idade > 59){
        printf("Pode aposentar");
    } else {
        printf("Nao pode aposentar");
    }

    return 0;
}