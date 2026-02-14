#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float x1,x2,y1,y2, distancia;

    printf("Insira a coordenada x do primeiro ponto: ");
    scanf("%f", &x1);
    printf("\nInsira a coordenada y do primeiro ponto: ");
    scanf("%f", &y1);
    printf("\nInsira a coordenada x do segundo ponto: ");
    scanf("%f", &x2);
    printf("\nInsira a coordenada y do segundo ponto: ");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("A distância será de: %0.2f", distancia);


    return 0;
}
