#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float moeda, fatorConversao;
    int tipoMoeda;

    printf ("Insira o valor (em dolar) a ser convertido: ");
    scanf("%f", &moeda);
    printf ("Escolha para qual moeda sera convertido: [1]Euro [2]Iene [3]Libra [4]Peso Cubano");;
    scanf ("%d", &tipoMoeda);
    switch (tipoMoeda)
    {
    case 1:
        fatorConversao = 6.11;
        moeda = moeda * fatorConversao;
        printf("Novo valor: %0.2f", moeda);
        break;
    case 2:
        fatorConversao = 0.039;
        moeda = moeda * fatorConversao;
        printf("Novo valor: %0.2f", moeda);
        break;
    case 3:
        fatorConversao = 7.27;
        moeda = moeda * fatorConversao;
        printf("Novo valor: %0.2f", moeda);
        break;
    case 4:
        fatorConversao = 0.23;
        moeda = moeda * fatorConversao;
        printf("Novo valor: %0.2f", moeda);
        break;

    default:
        printf("Código inválido, tente novamente");
        break;
    }
    return 0;
}
