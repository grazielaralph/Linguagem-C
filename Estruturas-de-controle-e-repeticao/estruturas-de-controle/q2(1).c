#include <stdio.h>

int main(){
    float l1, l2, l3;

    printf("Insira um dos lados do triangulo: ");
    scanf("%f", &l1);
    printf("Insira um dos lados do triangulo: ");
    scanf("%f", &l2);
    printf("Insira um dos lados do triangulo: ");
    scanf("%f", &l3);

    if (l1+l2<l3 || l2+l3<l1){
        printf("triangulo invalido");
    }else{
        if(l1==l2 && l2==l3){
        printf("Triangulo equilatero");
        }else{
            if(l1==l2 || l1==l3 || l3==l2){
                printf("Triangulo isosceles");
            }else{
                printf("Triangulo escaleno");
            }
        }   
    }

    return 0;
}