/*
4. Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char *p;

    printf("Qual o tamanho da string a ser lido? ");
    scanf("%d", &n);

    p = (char *) malloc(n*sizeof(char));

    setbuf(stdin, NULL);

    printf("Digite a string: ");
    fgets(p, n, stdin);

    for(int i = 0; p[i] != '\0'; i++){
        if (p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u' && p[i] != 'A' && p[i] != 'E' && p[i] != 'I' && p[i] != 'O' && p[i] != 'U'){
            printf("\n%c", *(p + i));
        }
    }

    free(p);

    return 0;
}