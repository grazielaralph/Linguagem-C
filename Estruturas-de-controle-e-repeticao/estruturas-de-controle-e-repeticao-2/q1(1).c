#include <stdio.h>

int main(){
    int i=0, num, produto=0;

    for (i=1; i<=10; i++){
        for (num=1; num<=10; num++){
            produto = i*num;
            printf("%d x %d = %d\n", num, i, produto);
            if(num==10){
                printf("-//-\n");
            }
        }
        
    }
    return 0;
}