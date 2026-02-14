#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    double anguloGrau, anguloRad, validacao;

    printf("Insira o angulo em grau: ");
    scanf("%lf", &anguloGrau);

    //conversão
    anguloRad=anguloGrau*(M_PI/180);
    //teste
    validacao = pow(sin(anguloRad), 2) + pow(cos(anguloRad),2);
    if(validacao==1){
        printf("Este ângulo obedece a identidade trigonométrica, seu resultado foi %0.2lf", validacao);
    }else{
    printf("Este ângulo não obedece a identidade trigonométrica, seu resultado foi %0.2lf",validacao);
    }

    return 0;
}
