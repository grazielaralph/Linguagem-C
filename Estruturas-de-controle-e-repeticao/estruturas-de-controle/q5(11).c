#include <stdio.h>

int main(){
    double valor, taxaConversao;
    int tipoMoeda;

    printf ("Insira o valor que voce deseja converter: ");
    scanf ("%lf", &valor);
    printf ("Agora escolha para qual moeda voce deseja converter: [1]Real [2]Iene [3]Euro [4]Peso cubano");
    scanf("%d", &tipoMoeda);

    switch(tipoMoeda){
        case 1:
        taxaConversao = 5.48;
        valor = valor*taxaConversao;
        printf ("O valor convertido e de R$%0.2lf", valor);
        break;
        case 2:
        taxaConversao = 141.89;
        valor = valor*taxaConversao;
        printf ("O valor convertido e de  %0.2lf", valor);
        break; 
        case 3:
        taxaConversao = 0.9;
        valor = valor*taxaConversao;
        printf ("O valor convertido e de  %0.2lf", valor);
        break;
        case 4:
        taxaConversao = 24.01;
        valor = valor*taxaConversao;
        printf ("O valor convertido e de  %0.2lf", valor);
        break;

    }


}