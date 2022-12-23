/*
10. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.
*/

#include <stdio.h>
#include <string.h>

struct book
{
    char title[30];
    char autor[15];
    int ano;
};


int main(){
    struct book livros[5];
    char titulo[30];

    for (int i = 0; i < 5; i++){
        printf("Digite as informacoes do livro:\nAno: ");

        scanf("%d", &livros[i].ano);
        setbuf(stdin, NULL);
        printf("Titulo: ");
        fgets(livros[i].title, 30, stdin);
        setbuf(stdin, NULL);
        printf("Autor: ");
        fgets(livros[i].autor, 15, stdin);
    }

    printf("\nBuscar por: ");
    fgets(titulo, 30, stdin);

    printf("\nResultados:\n");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(livros[i].title, titulo) == 0)
        {
            fputs(livros[i].title, stdout);
            fputs(livros[i].autor, stdout);
            printf("Ano: %d\n\n", livros[i].ano);
        }
        
    }
    

    return 0;
}