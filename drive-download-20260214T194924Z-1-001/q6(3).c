/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual
à soma de seus divisores positivos diferentes de n. Construa um programa em
C que verifique se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 =
6.*/
#include <stdio.h>

int main(){
    int n, soma=0;

    printf("Insira um numero: ");
    scanf("%d", &n);
    
    for(int i=1; i<n; i++){
        if(n%i==0){
            soma+=i;
        }
    }

    if(soma==n){
        printf("%d e um numero perfeito", n);
    }else{
        printf("%d nao e um numero perfeito", n);
    }
    return 0;
}