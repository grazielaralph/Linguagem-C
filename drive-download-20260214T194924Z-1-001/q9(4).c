
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double numero, resto;

    printf("valor: ");
    scanf("%lf", &numero);

    if(numero>0){
        printf("%0.2lf e positivo", numero);
    }else{
        printf("%0.2lf e negativo", numero);
    }

    resto = fmod(numero, 2.0);

    if(resto==0){
        printf("\n %0.2lf e par", numero);
    }else{
        printf("\n %0.2lf e impar", numero);
    }


    return 0;
}
