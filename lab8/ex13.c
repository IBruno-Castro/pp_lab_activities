/*
13. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das
strings
*/

void substring(char *a, char *b, int n, int p){

    char *sec = b;
    int j = 0;

    for (int i = 0; i < n; i++){
        if (*a == *sec){
            sec++;
            j++;
        } else {
            sec = b;
            j = 0;
        }

        if (j == p){
            printf("S2 eh substring de S1");
            break;
        }

        a++;
    }
    
}