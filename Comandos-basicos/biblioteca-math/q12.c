/*Separação de mantissa e expoente de um número em ponto flutuante
Escreva um programa que leia um número em ponto flutuante e 
o separe em sua mantissa e expoente usando a função frexp(). 
A função frexp() retorna a mantissa e o expoente, de modo que:
x=mantissa⋅2^expoente
2^expoente: significa 2 elevado ao valor "expoente"
Após a separação, exiba a mantissa e o expoente do número lido.*/

#include <stdio.h>
#include <math.h>

int main(){
    double mantissa,  x;
    int exp;

    printf("Insira um valor real: ");
    scanf("%lf", &x);

    mantissa = frexp(x, &exp);

    printf("%0.2lf = %lf*2 elevado a %d", x, mantissa, exp);
    printf ("\n mantissa = %lf", mantissa);
    printf("\n expoente = %d", exp);

    return 0;
}

