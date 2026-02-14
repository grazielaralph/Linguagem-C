#include <stdio.h>
#include <math.h>
#include <locale.h>
#define RAIOTERRA 6371.0

/*Cálculo de distância entre dois pontos em uma esfera (fórmula de Haversine)
Escreva um programa que calcule a distância entre duas coordenadas geográficas (latitude e longitude) na superfície da Terra, utilizando a fórmula de Haversine:
(ver formula em imagem em anexo, arquivo Formula de Haversine.png)
Onde:
R é o raio da Terra (aproximadamente 6371 km).
Δφ é a diferença entre as latitudes (em radianos).
Δλ é a diferença entre as longitudes (em radianos).
φ1 e φ2 são as latitudes dos pontos 1 e 2.*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double latitude1, longitude1, latitude2, longitude2, varLatitude, varLongitude, distancia;

    //entrada dos dados
    printf("Insira a latitude e a longitude do primeiro ponto(em graus): ");
    scanf("%lf %lf", &latitude1, &longitude1);
    printf("Insira a latitude e a longitude do segundo ponto(em graus): ");
    scanf("%lf %lf", &latitude2, &longitude2);

    //conversao para radianos
    latitude1 = latitude1*(M_PI/180);
    longitude1 = longitude1*(M_PI/180);
    latitude2 = latitude2*(M_PI/180);
    longitude2 = longitude2*(M_PI/180);

    //variacao de latitude e longitude 
    varLatitude= latitude2-latitude1;
    varLongitude= longitude2-longitude1;

    //calculo da distancia
    distancia = 2*RAIOTERRA*asin(sqrt(pow(sin(varLatitude/2),2)+cos(latitude1)*cos(latitude2)*pow(sin(varLongitude/2),2)));

    printf("A distância entre dois pontos de uma esfera pela fórmula de Haversine é: %0.2lf", distancia);

    return 0;
}