/*
20. Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e 
as armazene em um vetor de estruturas (N é informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando o usuário digitar o número de duas cidades o programa deverá retornar a
distância entre elas
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cidade
{
    char nome[30];
    int posX;
    int posY;
};

int main(){
    struct cidade *cidades;
    int n, x, y;

    printf("Qual o tamanho do vetor a ser lido? ");
    scanf("%d", &n);

    if((cidades = (struct cidade *) malloc(n * sizeof(struct cidade)) == NULL)){
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        setbuf(stdin, NULL);
        fgets(cidades[i].nome, 30, stdin);

        scanf("%d %d", &cidades[i].posX, &cidades[i].posY);
    }
    
    float **dist;

    if((dist = (float **) malloc(n * sizeof(float *)) == NULL)){
        return 1;
    }

    for (int i = 0; i < n; i++){
        if((dist[i] = (float *) malloc(n * sizeof(float)) == NULL)){
            return 1;
        }

        for (int j = 0; j < n; j++){
            //modulo da reta entre as duas cidades
            dist[i][j] = sqrt((cidades[i].posX - cidades[j].posX)*(cidades[i].posX - cidades[j].posX)) + ((cidades[i].posY - cidades[j].posY)*(cidades[i].posY - cidades[j].posY));
            printf("%f ", dist[i][j]);
        }
        printf("\n");
    }

    printf("Distancia entre as cidades: ");
    scanf("%d %d", &x, &y);

    printf("%f", dist[x][y]);

    for (int i = 0; i < n; i++){
        free(dist[i]);
    }

    free(dist);

    free(cidades);

    return 0;
}