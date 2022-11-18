/*
21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário.
*/

#include <stdio.h>

int main(){
    int a, b, counter, primo, x;

    counter = 0;
    primo = 0;
    x = 0;
    
    printf("Digite entre que dois numerosvc quer verificar:\n");
    scanf("%d %d", &a, &b);
    
    if(a >= 0 && a < b){
        
        for(int i = a; i < b; i++){
            primo = 1;
        
            for(int j = 2; j <= i; j++){
                if(((i % j) == 0) && (j != i)){
                    primo  = 0;
                    break;
                }
            }
            
            if(primo !=0 && i!=1){
                counter++;
            }

        }

    }else{
        printf("Numero invalido!");
        x=1;
    }
    
    if(!x){
        printf("Entre %.2d e %.2d existem %d numeros primos ", a, b, counter);
    }

    return 0;
}