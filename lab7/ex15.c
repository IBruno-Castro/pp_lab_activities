/*
15. Faça um programa para armazenar um livro de receitas e:
 Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
ingredientes e ingredientes;

 Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor
de ingredientes, sendo que cada ingrediente contém nome e quantidade;
 Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar,
informe ao usuário. Repita o processo até digitar uma string vazia.
*/

#include <stdio.h>
#include <string.h>

struct ingrediente
{
    char nome[25];
    int quant;
};


struct receita{
    char nome[25];
    int quant;
    struct ingrediente ingredientes[3];
};

int main(){
    struct receita livro[5];
    char name[25];
    int achou = 0;

    for (int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("\n\nNome da receita: ");
        fgets(livro[i].nome, 25, stdin);
        
        printf("\nQuantidade de ingredientes: ");
        scanf("%d", &livro[i].quant);
        setbuf(stdin, NULL);
        
        for (int j = 0; j < 3; j++){
            printf("\nNome do ingrediente: ");
            fgets(livro[i].ingredientes[j].nome, 25, stdin);
            
            printf("\nQuantidade: ");
            scanf("%d", &livro[i].ingredientes[j].quant);
        }
    }
    
    do
    {
        setbuf(stdin, NULL);
        printf("Buscar por receita de: ");
        fgets(name, 25, stdin);

        for (int i = 0; i < 5; i++)
        {
            if (strcmp(name, livro[i].nome) == 0)
            {
                achou = 1;

                printf("Encontrado\n ");
                printf("Ingredientes: ");
                for (int j = 0; j < 3; j++)
                {
                    fputs(livro[i].ingredientes[j].nome, stdout);
                    printf("Quantidade: %d\n\n", livro[i].ingredientes[j].quant);
                }
            }
            
        }
    } while (achou != 1);

    return 0;
}