/*Separação da parte inteira e fracionária de um número em ponto flutuante
Escreva um programa que leia um número em ponto flutuante e o separe em sua 
parte inteira e parte fracionária usando a função modf(). A função modf() 
retorna a parte fracionária e armazena a parte inteira em uma variável separada. 
Exiba as duas partes separadamente.*/

#include <stdio.h>
#include <math.h>

int main(){
    double parteDecimal, valor, parteInteira;
    

    printf("Insira um valor real: ");
    scanf("%lf", &valor);
    parteDecimal = modf(valor, &parteInteira);

    printf("Parte inteira: %lf", parteInteira);
    printf("\nParte Fracionaria: %lf", parteDecimal);

    return 0;

}