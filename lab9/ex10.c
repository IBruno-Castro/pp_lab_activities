/*
10. Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um 
vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de memória
de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual 
a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 
primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. Exiba 
na tela os valores armazenados nos 10 primeiros elementos do veto
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    srand(time(NULL));

    do{
        printf("Qual o tamanho do vetor de douoble? Deve ser maior ou igual a 10: ");
        scanf("%d", &n);
    }while(n < 10);

    if((p = (double *) malloc(n*sizeof(double))) == NULL){
        return 1;
    }

    for(int i = 0; i < 10; i++){
        *(p + i) = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        printf("\n%d", *(p + i));
    }

    free(p);

    return 0;
}