#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, delta, x1, x2;

    printf ("Insira tres valores: ");
    scanf ("%f %f %f", &a, &b, &c);

    delta = pow(b, 2)- 4*a*c;

    if (delta>0){
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf ("Esta equacao possui raizes reais, sao elas: %0.2f e %0.2f", x1, x2);
    }else{
        if(delta==0){
            x1 = (-b+sqrt(delta))/(2*a);
            printf ("Esta equacao possui uma raiz real: %0.2f ", x1);
        }else{
            printf("Esta equacao nao possui raizes reais");
        }
        
    } 

    return 0;

}