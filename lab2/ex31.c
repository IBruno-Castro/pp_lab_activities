/*
31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.
*/

#include <stdio.h>

int main(){
    float height, weight;

    printf("Digite sua altura e seu peso: ");
    scanf("%f %f", &height, &weight);

    if(weight < 61){
        if (height < 1.2)
        {
            printf("Classificacao A");
        } else {
            if (height < 1.7)
            {
                printf("Classificacao B");
            } else {
                printf("Classificacao C");
            }
        }
    } else {
        if (weight < 91)
        {
            if (height < 1.2)
            {
                printf("Classificacao D");
            } else {
                if (height < 1.7)
                {
                    printf("Classificacao E");
                } else {
                    printf("Classificacao F");
                }
            }
        } else {
            if (height < 1.2)
            {
                printf("Classificacao G");
            } else {
                if (height < 1.7)
                {
                    printf("Classificacao H");
                } else {
                    printf("Classificacao I");
                }
            }
        }
        
    }

    return 0;
}