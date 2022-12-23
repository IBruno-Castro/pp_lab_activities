/*
8. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct card{
    char valor;
    char naipe[10];
};

int main(){
    srand(time(NULL));
    int x, y;

    char carta[12] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'K', 'Q', 'J'};
    char tipos[4][10] = {"espada", "pe", "copa", "diamante"};
    
    struct card cartas1[3];
    struct card cartas2[3];

    for (int i = 0; i < 3; i++){
        cartas1[i].valor = carta[rand() % 11];
        cartas2[i].valor = carta[rand() % 11];

        x = rand() % 3;
        y = rand() % 3;

        strcpy(cartas1[i].naipe, tipos[x]);
        strcpy(cartas2[i].naipe, tipos[y]);
        
    }

    printf("Mao do jogador 1: ");

    for (int i = 0; i < 3; i++){
        printf("\n%c ", cartas1[i].valor);
        fputs(cartas1[i].naipe, stdout);
    }

    printf("Mao do jogador 2: ");

    for (int i = 0; i < 3; i++){
        printf("\n%c ", cartas2[i].valor);
        fputs(cartas2[i].naipe, stdout);
    }    

    return 0;
}