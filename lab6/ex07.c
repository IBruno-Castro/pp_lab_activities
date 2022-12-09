/*
7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int n;

    printf("Digite uma frase: ");
    fgets(string, 100, stdin);

    n = strlen(string);
    printf("%d", n);

    for (int i = 0; i < n - 1; i++)
    {
        if(string[i] == ' '){
            for(int j = i; j < n - 1; j++){
                string[j] = string[j + 1];
            }
        }
    }

    fputs(string, stdout);
  
    return 0;
}