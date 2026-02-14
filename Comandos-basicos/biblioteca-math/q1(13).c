#include <stdio.h>
#include <math.h> 

int main(){
    float cat1, cat2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f",&cat1);
    printf("\nDigite o valor do segundo cateto: ");
    scanf("%f",&cat2);

    hipotenusa = sqrt(pow(cat1,2) + pow(cat2,2));

    printf("\nA hipotenusa e: %.2f\n", hipotenusa);

    return 0;

}