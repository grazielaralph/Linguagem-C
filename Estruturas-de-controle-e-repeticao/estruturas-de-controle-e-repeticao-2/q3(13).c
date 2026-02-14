#include <stdio.h>

int main(){
    int i, j, m, n;
    

    printf("Insira o valor de comprimento e largura: ");
    scanf("%d %d", &m, &n);
    for (i=1; i<=m; i++){
        for (j=1; j<=n; j++)
        {
            if (i % 2 != 0) {
                if (j % 2 != 0) {
                    printf(" X ");
                } else {
                    printf(" O ");
                }
            } else {
                if (j % 2 != 0) {
                    printf(" O ");
                } else {
                    printf(" X ");
                }
            }

            
            if (j == n) {
                printf("\n");
            }
          
        }
        
        
        
    }


    return 0;
}