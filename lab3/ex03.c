/*
3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
*/

#include <stdio.h>

int main(){ 

    int count = 10;

    while (count >= 0)
    {
        printf("%d\n", count);

        count--;
    }

    printf("FIM!");
    

    return 0;
}