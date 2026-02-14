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