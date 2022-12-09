/*
11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o
segmento S[I..J].
*/

#include <stdio.h>
#include <string.h>

int main(){
    char S[50];
    int i, j;

    printf("Digite a string: ");
    fgets(S, 20, stdin);
    setbuf(stdin, NULL);

    printf("Por qual indice o segmento da string comeca: ");
    scanf("%d", &i);
    setbuf(stdin, NULL);

    printf("Em qual termina: ");
    scanf("%d", &j);

    while(i <= j){
        printf("%c", S[i]);
        i++;
    }
    
    return 0;
}