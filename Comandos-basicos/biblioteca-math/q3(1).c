#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int base, expo1, expo2, diferenca;

    //entrada de dados
    printf("Insira a base: ");
    scanf("%d", &base);
    printf("\nInsira o expoente: ");
    scanf("%d", &expo1);
    printf("\nInsira outro expoente: ");
    scanf("%d", &expo2);

    //processamento
    diferenca = pow(base, expo1) - pow(base, expo2);

    printf("A diferença é %d", diferenca);



    return 0;
}
