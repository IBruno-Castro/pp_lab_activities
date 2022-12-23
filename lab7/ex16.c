/*
16. Faça um programa que armazena filmes produzidos por vários diretores e:
 Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após
ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
 Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o
processo até digitar uma string vazia.
*/

#include <stdio.h>
#include <string.h>

struct filme{
    char nome[20];
    int duracao;
    int ano;
};

struct diretor
{
    char nome[20];
    int quant;
    struct filme filmes[5];
};

int main(){
    struct diretor diretores[5];
    char buscar[20];
    int achou = 0;
    
    for (int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("\nDigite o nome do diretor: ");
        fgets(diretores[i].nome, 20, stdin);

        printf("Quantidade de filmes: ");
        scanf("%d", &diretores[i].quant);

        for (int j = 0; j < 5; j++){
            setbuf(stdin, NULL);
            printf("\nDigite o nome do filme: ");
            fgets(diretores[i].filmes[j].nome, 20, stdin);

            printf("A duração do filme: ");
            scanf("%d", &diretores[i].filmes[j].duracao);

            printf("O ano: ");
            scanf("%d", &diretores[i].filmes[j].ano);
        }
    }

    do
    {
        setbuf(stdin, NULL);
        printf("Buscar pelo diretor/a: ");
        fgets(buscar, 20, stdin);

        for (int i = 0; i < 5; i++){
            if (strcmp(buscar, diretores[i].nome) == 0){
                achou = 1;

                printf("Encontrado\n ");
                printf("Filmes: ");
                for (int j = 0; j < 5; j++){
                    fputs(diretores[i].filmes[j].nome, stdout);
                    printf("Duracao: %d\n", diretores[i].filmes[j].duracao);
                    printf("Ano: %d\n\n", diretores[i].filmes[j].ano);
                }
            }
            
        }
    } while (achou != 1);

    return 0;
}