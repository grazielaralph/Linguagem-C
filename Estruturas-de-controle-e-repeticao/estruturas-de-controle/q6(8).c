#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float energiaConsumida, valorTotal;
    int tipoConsumo;

    printf ("Informe a energia consumida (em kWh): ");
    scanf ("%f", &energiaConsumida);
    printf("Informe o tipo de consumo: [1] Residencial [2] Comercial \n");
    scanf("%d", &tipoConsumo);

    if(energiaConsumida<=100){
        valorTotal = 0.4*energiaConsumida;
        if(tipoConsumo==2){
            valorTotal = valorTotal+(1.50*energiaConsumida);
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }else{
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }
    }
    if(energiaConsumida>=101 && energiaConsumida<=300){
        valorTotal = 0.6*energiaConsumida;
        if(tipoConsumo==2){
            valorTotal = valorTotal+(1.50*energiaConsumida);
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }else{
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }
    }
    if(energiaConsumida>300){
            valorTotal = 0.8*energiaConsumida;
        if(tipoConsumo==2){
            valorTotal = valorTotal+(1.50*energiaConsumida);
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }else{
            printf("VALOR TOTAL: R$ %0.2f", valorTotal);
        }

    }

    return 0;
}
