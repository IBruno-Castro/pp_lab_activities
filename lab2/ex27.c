/*
27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
*/

#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade > 18){
        printf("Senior");
    } else {
        if (idade > 13){
            printf("Juvenil B");
        } else if (idade > 10){
                printf("Juvenil A");
            } else if (idade > 7){
                    printf("Infantil B");
                } else if(idade > 4){
                    printf("Infantil A");
                }
    }

    return 0;
}