/*
22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois
dígitos é 9009 = 91*99.
*/

#include <stdio.h>

int main(){
    int i=999, j, n, t, ni, im, jm, mnc=0;
    
    for(n=i*i; n>mnc; n=i*i){
        
        for(j=i; n>mnc; n=i*j){
            ni=0;
            
            for(t=n; t>0; t/=10){
                ni=ni*10+t%10;
            }
            
            if (n==ni){
                    mnc=n;
                    im=i;
                    jm=j;
            }
            
            j--;
        }
        i--;
    }
    
    printf("O maior palindromo eh: %d = %d x %d\n", mnc, im, jm);

    return 0;
}