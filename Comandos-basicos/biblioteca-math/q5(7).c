#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    double anguloGrau, anguloRad, seno;

    printf("Insira o angulo em grau: ");
    scanf("%lf", &anguloGrau);

    anguloRad=anguloGrau*(M_PI/180);
    seno = sin(anguloRad); //perguntar do professor 
    printf("O seno de %.2lf é %.2lf", anguloGrau, seno);



    return 0;
}
