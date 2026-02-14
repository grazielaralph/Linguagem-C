#include <stdio.h>

int main(){
    /*Escreva um programa em C que lê 15 valores reais, encontra o maior e o
menor deles e mostra o resultado.*/

float numero, maior, menor;

for (int i=0; i<=15; i++){
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    if(i==0){
        maior=menor=numero;
    }else{
        if(numero>maior){
            maior=numero;
        }
        if(numero<menor){
            menor=numero;
        }
    }
}
printf("Maior numero: %0.2f \nMenor numero: %0.2f", maior, menor);
}