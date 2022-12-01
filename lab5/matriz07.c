/*
7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de 
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a 
cartela gerada.
*/

#include <stdio.h>

int main(){   
    int cartela[5][5];
    int repetiu = 0;
    int valor;

    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            do
            {
                valor = rand() % 100;
                repetiu = 0;       
                
                for (int k = 0; k <= i; k++){
                    for (int h = 0; h < j; h++){
                        if (cartela[k][h] == valor){
                            repetiu = 1;
                            break;
                        }
                    }
                    if (repetiu){
                        break;
                    }
                }
            } while(repetiu);

            cartela[i][j] = valor;

            printf("%d ", cartela[i][j]);
        }

        printf("\n");
    }


    return 0;
}