#include <stdio.h>

int main(){
    double n1, n2, resultado;
    int operacao;
    printf("Insira um valor: ");
    scanf("%lf", &n1);
    printf("Insira um valor: ");
    scanf("%lf", &n2);
    printf ("Escolha uma operacao? [1]SOMA [2]SUBTRACAO [3]MULTIPLICACAO [4]DIVISAO");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
        resultado = n1+n2;
        printf("%lf + %lf = %lf", n1, n2, resultado);
        break;
        case 2: 
        resultado = n1-n2;
        printf("%lf - %lf = %lf", n1, n2, resultado);
        break;
        case 3:
        resultado = n1*n2;
        printf("%lf * %lf = %lf", n1, n2, resultado);
        break;
        case 4: 
        resultado = n1/n2;
        printf("%lf / %lf = %lf", n1, n2, resultado);
        break;
        default:
        printf("voce escolheu um valor invalido, reinicie o programa e tente novamente");
            }

            return 0;
    }