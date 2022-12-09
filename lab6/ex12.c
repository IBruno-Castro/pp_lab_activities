/*
12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    int n;

    printf("Digite uma frase: ");
    fgets(string, 200, stdin);

    n = strlen(string);

    for (int i = 0; i < n; i++){
        if(string[i] > 64 && string[i] < 91){
            string[i] = string[i] + 3;
        }
        
        if(string[i] > 96 && string[i] < 123){
            string[i] = string[i] + 3;
        }
    }

    fputs(string, stdout);

    return 0;
}