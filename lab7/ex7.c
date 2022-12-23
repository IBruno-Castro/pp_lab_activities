/*
7. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>

struct contato{
    int phone;
    char nome[20];
    char endereco[30];
};

int main(){
    struct contato pessoas[5];
    int first, second, third;
    int k = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite o nome: ");
        fgets(pessoas[i].nome, 20, stdin);
        
        setbuf(stdin, NULL);
        printf("Digite o endereco: ");
        fgets(pessoas[i].endereco, 30, stdin);

        printf("digite o telefone: ");
        scanf("%d", pessoas[i].phone);
        printf("\n");
    }

    first = 0;

    for (int i = 1; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(pessoas[i].nome[j] > pessoas[first].nome[j]){
                break;
            } else if (pessoas[i].nome[j] < pessoas[first].nome[j] && pessoas[i].nome[j] != pessoas[first].nome[j]){
                first = i;
                break;
            }
        }
    }

    fputs(pessoas[first].nome, stdout);
    fputs(pessoas[first].endereco, stdout);
    printf("%d\n\n", pessoas[first].phone);

    if (first != 0)
    {
        second = 0;
    } else {
        second = 1;
    }

    for (int i = 0; i < 5; i++){
        if (i != first && i != second){
            for (int j = 0; j < 5; j++){
                if(pessoas[i].nome[j] > pessoas[second].nome[j]){
                    break;
                } else if (pessoas[i].nome[j] < pessoas[second].nome[j]){
                    second = i;
                    break;
                }
            }
        }
    }

    fputs(pessoas[second].nome, stdout);
    fputs(pessoas[second].endereco, stdout);
    printf("%d\n\n", pessoas[second].phone);

    for (int i = 0; i < 5; i++){
        if (first != i && second != i){
            third = i;
            break;
        }
    }

    for (int i = 0; i < 5; i++){
        if (i != first && i != second && i != third){
            for (int j = 0; j < 5; j++){
                if(pessoas[i].nome[j] > pessoas[third].nome[j]){
                    break;
                } else if (pessoas[i].nome[j] < pessoas[third].nome[j]){
                    third = i;
                    break;
                }
            }
        }
    }
    
    fputs(pessoas[third].nome, stdout);
    fputs(pessoas[third].endereco, stdout);
    printf("%d", pessoas[third].phone);
    
    printf("\n\nQuarto e quinto\n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j != first && j != second && j != third && j != i && i != first && i != second && i != third){
                if(pessoas[i].nome[k] < pessoas[j].nome[k]){
                    fputs(pessoas[i].nome, stdout);
                    fputs(pessoas[i].endereco, stdout);
                    printf("%d\n\n", pessoas[i].phone);
                    fputs(pessoas[j].nome, stdout);
                    fputs(pessoas[j].endereco, stdout);
                    printf("%d", pessoas[j].phone);
                    break;
                }
                if (pessoas[i].nome[k] == pessoas[j].nome[k]){
                    k++;
                }
                
            }
        }
    }
    
    return 0;
}