/*
8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um 
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes
*/

#include <stdio.h>


int menu(){
    char op;

    printf("\nDigite qual funcao:\na) somar as duas matrizes\nb) subtrair a primeira matriz da segunda\nc) adicionar uma constante às duas matrizes\nd) imprimir as matrizes\nOpcao: ");
    scanf(" %c", &op);

    if (op == 'a'|| op == 'A'){
        return 1;
    }
    if (op == 'b'|| op == 'B'){
        return 2;
    }
    if (op == 'c'|| op == 'C'){
        return 3;
    }
    if (op == 'd'|| op == 'D'){
        return 4;
    }
    
}

int main(){
    int mat1[2][2];
    int mat2[2][2];
    int op, constante, x = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um numero para a posicao %dx%d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um numero para a posicao %dx%d: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    op = menu();

    if (op == 1){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                x = x + mat1[i][j] + mat2[i][j];
            }
        }
        
        printf("Soma das matrizes = %d", x);
    }

    if (op == 2){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                x = x + mat2[i][j] - mat1[i][j];
            }
        }
        
        printf("Subtracao das matrizes = %d", x);
    }

    if (op == 3){
        printf("Digite a constante: ");
        scanf("%d", &constante);

        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                mat1[i][j] = mat1[i][j] + constante;
            }
        }
        
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                mat2[i][j] = mat2[i][j] + constante;
            }
        }
    }

    if (op == 4){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%d ", mat2[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}