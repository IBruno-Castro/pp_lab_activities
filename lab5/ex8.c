/*
8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os 
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso 
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para 
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o 
vetor final que foi digitado
*/

#include <stdio.h>

int main(){
    int A[10];

    printf("Digite dez valores para um vetor: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);

        for (int j = 0; j < i; j++){
            if (A[j] == A[i]){
                i--;
                printf("Numero repetido. Digite novamente\n");
            }   
        }
    }

    printf("\nVetor final:\n");

    for (int i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}