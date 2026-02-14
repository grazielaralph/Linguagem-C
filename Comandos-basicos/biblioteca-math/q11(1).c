/*Cálculo do troco mínimo em uma máquina de vendas
Escreva um programa que simule o cálculo do troco mínimo a ser 
dado por uma máquina de vendas. O programa deve calcular o troco 
a partir de um valor pago e um preço de item, e dividir o troco 
nas moedas mais próximas (considerando valores de 1 real, 
50 centavos, 25 centavos, 10 centavos, e 5 centavos). 
Utilizar funções da biblioteca math.h*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    double preco, valorPago, troco;
    int trocoCentavos, moedas1real, moedas50centavos, moedas25centavos, moedas10centavos, moedas5centavos;

    printf("Digite o preco e o valor pago: ");
    scanf("%lf %lf", &preco, &valorPago);

    troco = valorPago-preco;

    if(troco<0){
        printf("O valor pago insuficiente");
    }

    //convertendo troco para centavos 
    trocoCentavos = troco * 100;

    //averiguando quantas moedas serao necessarias
    moedas1real = floor (trocoCentavos/100.0);
    trocoCentavos -= moedas1real*100;
    
    moedas50centavos = floor(trocoCentavos/50.0);
    trocoCentavos -= moedas50centavos*50;
    
    moedas25centavos = floor(trocoCentavos/25.0);
    trocoCentavos -= moedas25centavos*25;
    
    moedas10centavos = floor(trocoCentavos/10.0);
    trocoCentavos -= moedas10centavos*10;

    moedas5centavos = floor(trocoCentavos/5.0);
    trocoCentavos -= moedas5centavos*5;

    printf ("Troco total: R$%0.2lf", troco);
    printf("\nMoedas de 1 real: %d", moedas1real);
    printf("\nMoedas de 50 centavos: %d", moedas50centavos);
    printf("\nMoedas de 25 centavos: %d", moedas25centavos);
    printf("\nMoedas de 10 centavos: %d", moedas10centavos);
    printf("\nMoedas de 5 centavos: %d", moedas5centavos);

    return 0;
}