/*
6. Faça um programa que simule a memória de um computador: o usuário irá especificar o
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a 
memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o 
usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o valor 
contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, choice, *p, i;

    printf("Quantos bytes do tipo inteiro devem ser alocados? ");
    scanf("%d", &n);

    if((p = (int *) calloc(n, sizeof(int))) == NULL){
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("\n%d", *(p + i));
    }
    do{
        do{
            printf("\n1. Inserir valor em uma posicao\n2.Concultar o valor de uma posicao\n3.Sair\nOpcao: ");
            scanf("%d", &choice);
        }while(choice < 1 || choice > 3);

        if (choice == 1){
            printf("Insira a posicao: ");
            scanf("%d", &i);

            printf("Insira o valor: ");
            scanf("%d", &p[i]);
        } else if(choice == 2){
            printf("Insira a posicao: ");
            scanf("%d", &i);

            printf("%d\n\n", p[i]);
        }
    } while(choice != 3);

    free(p);

    return 0;
}