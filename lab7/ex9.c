/*
9. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0.
*/

#include <stdio.h>
#include <string.h>

struct carro{
    int ano;
    float price;
    char marca[15];
};

int main(){
    struct carro cars[5];
    float p;

    for (int i = 0; i < 5; i++){
        scanf("%d\n%f", &cars[i].ano, &cars[i].price);
        setbuf(stdin, NULL);
        fgets(cars[i].marca, 15, stdin);
    }

    do{
        scanf("%f", &p);

        for (int i = 0; i < 5; i++){
            if (cars[i].price < p){
                printf("%d\n%f", cars[i].ano, cars[i].price);
                fputs(cars[i].marca, stdout);
            }
        }

    }while (p > 0);
    

    return 0;
}