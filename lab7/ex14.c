/*
14. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
 Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.
*/

#include <stdio.h>
#include <string.h>

struct voo
{
    int origem;
    int destino;
};

struct aero
{
    int codigo;
    int vooOut;
    int vooIn;
};

int main(){
    struct voo viagem[5];
    struct aero portos[5];

    for (int i = 0; i < 5; i++)
    {
        portos[i].codigo = i;
        portos[i].vooIn = 0;
        portos[i].vooOut = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        do{
            printf("\n\nCodigo de origem: ");
            scanf("%d", &viagem[i].origem);
        }while(viagem[i].origem > 4);

        do{
            printf("Codigo de destino: ");
            scanf("%d", &viagem[i].destino);
        }while(viagem[i].destino > 4);

        for (int j = 0; j < 5; j++){
            if (viagem[i].origem == portos[j].codigo){
                portos[j].vooOut++;
            } else if (viagem[i].destino == portos[j].codigo){
                portos[j].vooIn++;
            }
        }
    }
    
    return 0;
}
