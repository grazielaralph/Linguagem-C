#include <stdio.h>
#include <math.h>

int main(){
    double n1, n2, n3, maior, menor;

    printf("valor: ");
    scanf("%lf", &n1);
    maior = n1;
    printf("valor: ");
    scanf("%lf", &n2);
    if(n2>n1){
        n1 = maior;
        maior = n2;
        menor = n1;
    }else{
        menor = n2;
    }
    printf("valor: ");
    scanf("%lf", &n3);
    maior = fmax(maior, n3);
    menor = fmin(menor, n3);

    printf("Maior: %lf \nMenor: %lf", maior, menor);

    
    return 0;
}