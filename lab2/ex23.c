/*
23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996.
*/

#include <stdio.h>

int main(){
    int ano;

    printf("Digite p ano: ");
    scanf("%d", &ano);

    if(ano%400 == 0){
        printf("Ano eh bissexto");
    } else {
        printf("Ano nao eh bissexto");
    }

    return 0;
}