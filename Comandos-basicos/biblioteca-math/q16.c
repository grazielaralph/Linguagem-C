#include <stdio.h>
#include <math.h>

int main(){
    double n1, n2, n3, a, b, dif1, dif2, borda;

    printf("tres valores: ");
    scanf ("%lf %lf %lf", &n1, &n2, &n3);

    a = fmin(n1, n2);
    b = fmax(n1, n2);

    if(n3>=a && n3<=b){
        dif1 = n3-a;
        dif2 = n3-b;
        borda = fmin(dif1, dif2);
        borda = fabs(borda);

        if(dif1<dif2){
            printf("a diferença esta mais proxima da borda a");
            printf("\n%lf esta no intervalo e a diferenca absoluta mais proxima da borda vale %lf", n3, borda);
        }else{
            printf("a diferença esta mais proxima da borda b");
            printf("\n%lf esta no intervalo e a diferenca absoluta mais proxima da borda vale %lf", n3, borda);
        }
    }else{
        printf("%lf nao esta no intervalo", n3);
    }
    
    return 0;

}