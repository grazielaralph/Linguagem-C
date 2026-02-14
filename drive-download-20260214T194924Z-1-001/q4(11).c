#include <stdio.h>


int main(){
    int n, i, j;

    printf("insira um valor: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1  || i==n){
                printf("*");
            }else{
                if(j==1  || j==n){
                printf("*");
            }else{
                printf(" ");
            }
            
            }
            

            if(j==n){
                printf("\n");
            }
    }
    
}
}