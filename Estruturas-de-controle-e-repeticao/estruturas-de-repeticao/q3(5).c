/*Faça um programa que leia vários inteiros positivos e mostre, no final, a
soma dos números pares e a soma dos números ímpares. O programa para
quando entrar um número maior que 1000.*/

#include <stdio.h>

int main(){
    int numero=0, somaPar=0, somaImpar=0;

    while (numero<1000){
        printf("Insira um valor inteiro e positivo: ");
        scanf("%d", &numero);
        if(numero<1000){
            if(numero%2==0){
                somaPar+=numero;
            }else{
                somaImpar+=numero;
            }
        }
    }
    printf("Soma dos Pares: %d \nSoma dos Impares: %d", somaPar, somaImpar);
    return 0;
}