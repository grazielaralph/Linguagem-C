#include <stdio.h>
/*Dado um número identificar se é um número primo. (Um número primo é
aquele que é dividido apenas por um e por ele mesmo.)*/

int main(){
    int numero, cont=0;

    printf("Insira um valor:");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        if(numero%i==0){
            cont++;
        }
    }
    if(cont>2){
        printf("%d nao e primo", numero);
    }else{
        printf("%d e primo", numero);
    }

}