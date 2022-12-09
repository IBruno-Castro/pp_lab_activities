/*
9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char carros[5][12];
    int consumo[5];
    int economico;
    int menorConsumo;
    int consumoMil[5];


    for (int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite o nome de um carro: ");
        fgets(carros[i], 100, stdin);
    }

    for (int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite o consumo desse carro: ");
        scanf("%d", &consumo[i]);
    }

    menorConsumo = consumo[0];

    for (int i = 0; i < 4; i++){
        if (menorConsumo < consumo[i+1]){
            menorConsumo = consumo[i+1];
            economico = i+1;
        }
    }

    printf("\n");
    for (int i = 0; i < 5; i++){
        consumoMil[i] = 1000/consumo[i];
        printf("%dL de combustivel em 1000 km\n", consumoMil[i]);
    }

    printf("\n%s eh o carro mais economico", carros[economico]);

    return 0;
}