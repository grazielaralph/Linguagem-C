#include <stdio.h>
#include <math.h>


int main(){
    float anguloGrau, anguloRad;

    printf("Insira o angulo em grau: ");
    scanf("%f", &anguloGrau);

    anguloRad=anguloGrau*(M_PI/180);

    printf("\nO angulo %0.2f em radianos e: %0.2f", anguloGrau,anguloRad);

    return 0;
}