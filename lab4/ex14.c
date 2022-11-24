/*
14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina 
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma 
mensagem
*/

void consumo(float d, float gas){
    int gasto = d/gas;
    
    if (gasto < 8){
        printf("Venda o carro");
    } else if (gasto >= 8 && gasto <= 14){
        printf("Economico");
    } else {
        printf("Super economico");
    }
}

int main () {
    float a, b;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &a);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &b);

    consumo(a, b);

    return 0;
}