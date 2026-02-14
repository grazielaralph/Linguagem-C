#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nota=0;
    printf("Insira sua nota de 0 a 100: ");
    scanf ("%d", &nota);
    if(nota>=90 && nota<=100){
        printf("A");
    }
    if(nota>=80 && nota<=89){
        printf("B");
    }
    if(nota>=70 && nota<=79){
        printf("C");
    }
    if(nota>=60 && nota<=69){
        printf("D");
    }
    if(nota>=0 && nota<=59){
        printf("F");
    }
    if(nota<0 || nota>100){
        printf("Nota inválida!");
    }

    return 0;
}
