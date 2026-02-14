#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char semaforo;

    printf("Digite qual cor esta no semaforo: [V]Vermelho [A]Amarelo [E]Verde");
    scanf("%c", &semaforo);

    switch(semaforo){
    case 'V':
        printf("A proxima cor e verde");
        break;
    case 'A':
        printf("A proxima cor e vermelho");
        break;
    case 'E':
        printf("A proxima cor e amarelo");
        break;
    }


    return 0;
}
