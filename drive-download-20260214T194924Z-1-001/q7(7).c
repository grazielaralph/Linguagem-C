#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //entrada: massa, amplitude, anguloFaseInicial, tempo
    double anguloRad, amplitude, tempo,  frequenciaAngular, posicao, frequencia;

    printf("Insira o ângulo da fase inicial em radianos: ");
    scanf("%lf", &anguloRad);
    printf("\nAmplitude:");
    scanf("%lf", &amplitude);
    printf("\nTempo: ");
    scanf("%lf", &tempo);
    printf("\nFrequência: ");
    scanf("%lf", &frequencia);

    

    //frequencia angular
    frequenciaAngular = 2*M_PI*frequencia;

    //posição em função do tempo
    posicao= amplitude*cos(frequenciaAngular*tempo+anguloRad);


    //saída de dados:
    printf("A posição do objeto no instante %0.2lf é %0.2lf", tempo, posicao);

    return 0;
}