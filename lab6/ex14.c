/*
14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[60], string2[30];
    int n;

    printf("Digite a primeira string: ");
    fgets(string1, 60, stdin);
    setbuf(stdin, NULL);

    printf("Digite a segunda string: ");
    fgets(string2, 30, stdin);
    setbuf(stdin, NULL);

    printf("Quantos caracteres devo concatenar? ");
    scanf("%d", &n);

    string2[n] = '\0';

    strcat(string1, string2);
    fputs(string1, stdout);

    return 0;
}