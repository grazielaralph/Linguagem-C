#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Divisão de uma quantia entre pessoas com cálculo do resto
Escreva um programa que divida uma quantia em dinheiro igualmente entre um número de pessoas, 
calculando quanto cada pessoa receberá e quanto sobrar em centavos. 
Utilize as funções floor() para dividir a quantia de forma inteira e 
fmod() para calcular o restante em centavos.*/

//A função floor() arredonda um número PARA BAIXO para o inteiro mais próximo.
//fmod(x, y) Retorna o resto de ponto flutuante de x/y

int main(){
    setlocale(LC_ALL, "Portuguese");

    double dinheiro, qtdPessoas, quantiaPessoa, resto;

    printf("Insira a quantia em reais e a quantidade de pessoas em que o dinheiro será dividido: ");
    scanf("%lf %lf", &dinheiro, &qtdPessoas);

    quantiaPessoa = floor (dinheiro/qtdPessoas);
    resto = fmod(dinheiro,qtdPessoas); 

    printf("A quantia por pessoa será de R$%0.2lf e o resto será de R$%0.2lf", quantiaPessoa, resto);
    return 0;
}