/*Um determinado material radioativo perde metade de sua massa a cada 50
segundos. Dada a massa inicial, em gramas, fazer um programa em C que
calcule o tempo necessário para que essa massa se torne menor que 0,5 grama.
O programa em C deve escrever a massa inicial, a massa final e o tempo
calculado em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>
#define TEMPO_PERDA 50

int main()
{
    int tempoSeg=0;
    float massaInicial, massaFinal=1;

    printf("Insira a massa inicial do material: ");
    scanf ("%f", &massaInicial);

    while(massaFinal>=0.5){
        if(tempoSeg==0){
            massaFinal = massaInicial/2;
            tempoSeg+=TEMPO_PERDA;
        }else{
             massaFinal = massaFinal/2;
            tempoSeg+=TEMPO_PERDA;
        }
        }

    int horas = tempoSeg / 3600;
    tempoSeg %= 3600;
    int minutos = tempoSeg / 60;
    int segundos = tempoSeg % 60;

    printf("Massa Inicial: %0.2f \nMassa Final: %0.2f", massaInicial, massaFinal);
    printf("\nTempo total: %d horas, %d minutos e %d segundos", horas, minutos, segundos);
    return 0;
}


   
