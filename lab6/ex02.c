/*
2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[11];
    int n, counter = 0;

    printf("Digite uma string: ");
    fgets(string, 11, stdin);

    n = strlen(string);

    for (int i = 0; i < n; i++){
        if(string[i] == '1'){
            counter++;
        }
    }

    printf("%d", counter);

    return 0;
}