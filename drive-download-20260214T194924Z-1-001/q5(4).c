#include <stdio.h>
#include <math.h>

int main(){
    float moeda, fatorConversao;
    int tipoMoeda;

    printf ("Insira o valor (em dolar) a ser convertido: ");
    scanf("%f", &moeda);
    printf ("Escolha para qual moeda sera convertido: [1]Euro [2]Iene [3]Libra [4]Peso Cubano");;
    scanf ("%d", &tipoMoeda);
    switch (tipoMoeda)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}