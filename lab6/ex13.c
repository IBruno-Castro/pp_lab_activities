/*
13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int j, n;
    char string[50];
    int palindromo = 1;

    printf("Digite uma string e verifique se eh palindromo: ");
    fgets(string, 50, stdin);

    n = strlen(string);
    j = n - 2;

    for (int i = 0; i != j; i++){
        if (string[i] != string[j]){
            palindromo = 0;
            break;
        }

        j--;
    }
    
    if (palindromo == 1){
        printf("Eh palindromo");
    } else {
        printf("Nao eh palindromo");
    }

    return 0;
}
