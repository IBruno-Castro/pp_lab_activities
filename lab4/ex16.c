/*
16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos 
sinais de igual serão mostrados.
*/

#include <stdio.h>

void desenha_linha(int num){
    for (int i = 0; i < num; i++)
    {
        printf("=");
    }
}

int main(){
    int num;

    printf("Digite quantos sinais de igual terao na linha: ");
    scanf("%d", &num);

    desenha_linha(num);

    return 0;
}