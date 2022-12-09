/*
5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    int n;

    printf("Digite uma frase em maiusculo: ");
    fgets(string, 200, stdin);

    n = strlen(string);

    for (int i = 0; i < n; i++){
        if(string[i] > 64 && string[i] < 91){
            string[i] = string[i] + 32;
        }
    }

    fputs(string, stdout);

    return 0;
}