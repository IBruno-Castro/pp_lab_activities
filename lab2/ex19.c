/*
19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.
*/

#include <stdio.h>

int main(){
    int num;

    printf("digite um numero inteiro: ");
    scanf("%d", &num);

    if(num%3 == 0 && num%5 == 0){
        printf("Divisivel por 3 e por 5");
    } else {
        if (num%3 == 0)
        {
            printf("Divisivel por 3");
        }
        if(num%5 == 0){
            printf("Divisivel por 5");
        }
    }

    if(num%3 != 0 && num%5 != 0){
        printf("Nao eh divisivel por 3 nem por 5");
    }

    return 0;
}