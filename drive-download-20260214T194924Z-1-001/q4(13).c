#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double x1, x2, delta;

    printf ("Insira 3 valores:");
    scanf ("%d %d %d", &a, &b, &c);

    delta = pow(b,2)-4*a*c;

    if (delta>0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf ("A equacao possui duas raizes reais, sao elas: %0.2lf e %0.2lf", x1, x2);
    }else{
        if (delta == 0){
            x1 = (-b+sqrt(delta))/2*a;
            printf("A equacao possui somente uma raiz real: %0.2lf", x1);
        }else{
            printf("a equacao nao possui raizes reais");
        }

    }

    return 0;
}
