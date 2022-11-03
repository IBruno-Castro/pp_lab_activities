/*
37. As tarifas de certo parque de estacionamento são as seguintes:
 1 e 2a hora - R$1,00 cada;
 3 e 4a hora - R$1,40 cada;
 5 hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/

#include <stdio.h>

int main(){
    int horaPagar, h, min, hFinal, minFinal;

    printf("Digite a hora da chegada: ");
    scanf("%d:%d", &h, &min);

    printf("Digite a hora da partida: ");
    scanf("%d:%d", &hFinal, &minFinal);

    if (min < 60 && h < 25)
    {
        
        h = minFinal + min > 60 ? h + 1 : h;

        h = hFinal < h ? (hFinal + 24) - h : hFinal - h;

        min = minFinal < min ? (minFinal + 60) - min : minFinal - min;
    
        if (h <= 2 && h > 0){
            printf("Tarifa a pagar = RS1,00\n");
            printf("Duracao do estacionamento = %d:%d", h, min);
        } else if (h <= 4){
            printf("Tarifa a pagar = RS1,40\n");
            printf("Duracao do estacionamento = %d:%d", h, min);
        } else if (h >= 5){
            printf("Tarifa a pagar = RS2,00\n");
            printf("Duracao do estacionamento = %d:%d", h, min);
        } else {
            printf("Nao precisa pagar tarifa\n");
            printf("Duracao do estacionamento = %d:%d", h, min);
        }
  
    }

    return 0;
}