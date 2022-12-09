/*
3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[30];

    printf("Digite uma frase: ");
    fgets(string, 30, stdin);

    int length = strlen(string);

    for (int i = length; i >= 0; i--){
        printf("%c", string[i]);
    }
    
    return 0;
}