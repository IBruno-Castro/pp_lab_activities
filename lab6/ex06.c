/*
6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    int n;

    printf("Digite uma frase em minusculo: ");
    fgets(string, 200, stdin);

    n = strlen(string);

    for (int i = 0; i < n; i++){
        if(string[i] > 96 && string[i] < 123){
            string[i] = string[i] - 32;
        }
    }

    fputs(string, stdout);

    return 0;
}