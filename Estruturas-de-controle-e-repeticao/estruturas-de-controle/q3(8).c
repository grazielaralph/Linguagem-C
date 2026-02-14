#include <stdio.h>

int main(){
    float salario, aliquota, ir;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario<1903.08){
        printf("Isento de imposto de renda");
    }
    if(salario>=1903.08 && salario<2828.65){
        aliquota = 0.75;
        ir = salario * aliquota;
        printf("Voce pagara R$ %0.2f de imposto de renda", ir);
    }
    if (salario>=2828.65 && salario<3751.05){
        aliquota = 0.15;
        ir = salario * aliquota;
        printf("Voce pagara R$ %0.2f de imposto de renda", ir);
    }
    if (salario>=3751.05 && salario<=4664.68){
        aliquota = 0.225;
        ir = salario * aliquota;
        printf("Voce pagara R$ %0.2f de imposto de renda", ir);
    }
    if (salario>4664.68){
        aliquota = 0.275;
        ir = salario * aliquota;
        printf("Voce pagara R$ %0.2f de imposto de renda", ir);
    }
    return 0;
}