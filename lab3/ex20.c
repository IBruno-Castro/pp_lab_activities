/*
20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
*/

#include <stdio.h>

int main(){
	int primo, sum = 0;
	
	for (int i = 1; i < 2000000; i++) {
		
        if (i == 0 || i == 1) {
			primo = 0;
		} else {
			primo = 1; 
			
            for(int j = 2; j < i; j++){
				if (i % j == 0){
					primo = 0;
				}
			}
		}
		
        if(primo != 0 && i != 1){
           sum = sum + i;
        }
	}
   
    printf("A soma de todos numeros primos menores que 2000000 eh: %d", sum);

    return 0;
}