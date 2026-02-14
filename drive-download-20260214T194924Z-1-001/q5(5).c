#include <stdio.h>

int main(){
    int a, b, da, db,  mdc;

    printf("insira dois valores para descobrir se eles sao coprimos: ");
    scanf("%d %d", &a, &b);

    for (int i=1; i<=a; i++){
        if(a%i==0){
            da=i;
            if(da==db){
                if(da>mdc){
                    mdc=da;
                }
            }
        }
    for (int j=1; j<=b; j++){
        if(b%j==0){
            db=j;
            if(da==db){
                if(da>mdc){
                    mdc=da;
                }
            }
        }
        
    }

    }

    if(mdc!=1){
        printf("%d e %d nao sao coprimos", a, b);
    }else{
        printf("%d e %d sao coprimos", a, b);
    }

}