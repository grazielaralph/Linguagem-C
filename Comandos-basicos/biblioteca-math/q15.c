#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf ("digite dois valores: ");
    scanf("%lf %lf", &a, &b);

    c = fabs(a-b);
    printf ("resultado: %lf", c);
    
    return 0;
}