/*
18. Escreva um programa para fazer a alocação dinâmica dos blocos de dados conforme 
solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código
do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

struct registro
{
    char nome[30];
    int cod;
    float preco;
};


int main(){
    //letra a
    int *vet;

    vet = (int *) malloc(1024);

    free(vet);
    
    //letra b
    float **a;


    a = (float **) malloc(10 * sizeof(float *));

    for (int i = 0; i < 10; i++){
        a[i] = (float *) malloc(10 * sizeof(float));

        printf("\n");
    }
    
    for (int i = 0; i < 10; i++){
        free(a[i]);
    }

    free(a);

    //letra c
    struct registro *registros;

    registros = (struct registro *) malloc(50 * sizeof(struct registro));

    free(registros);

    //letra d
    char **texto;
    texto = (char **) malloc(100 * sizeof(char *));

    for (int i = 0; i < 10; i++){
        texto[i] = (char *) malloc(80 * sizeof(char));

        printf("\n");
    }
    
    for (int i = 0; i < 10; i++){
        free(texto[i]);
    }

    free(texto);

    return 0;
}