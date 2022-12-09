/*
8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    char l1, l2;

    printf("Digite uma frase: ");
    fgets(string, 100, stdin);

    printf("Digite a letra que deve ser trocada: ");
    setbuf(stdin, NULL);
    scanf("%c", &l1);

    printf("Digite um caracter para substituir a letra 1: ");
    setbuf(stdin, NULL);
    scanf("%c", &l2);

    int n = strlen(string);

    for (int i = 0; i < n; i++){
        if (string[i] == l1){
            string[i] = l2;
        }
    }
    
    printf("%s", string);
    
    return 0;
}