#include <stdio.h>
#include <math.h>
#define IR 0.11
#define INSS 0.08
#define S 0.05

int main(){
    float salarioHora, salarioBruto, salarioLiquido, descontoIR, descontoINSS, descontoSindicato;
    int horasTrabalhadas;

    printf("Digite seu salario ganho por hora: ");
    scanf ("%f", &salarioHora);
    printf("\nAgora insira a quantidade de horas trabalhadas este mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = salarioHora*horasTrabalhadas;

    descontoINSS = salarioBruto*INSS;
    descontoIR = salarioBruto *IR;
    descontoSindicato = salarioBruto*S;

    salarioLiquido = salarioBruto - (descontoINSS+descontoIR+descontoSindicato);

    printf("Seu salario liquido foi de : R$ %0.2f \n O desconto do INSS foi de : R$ %0.2f \n O desconto do Sindicato foi de: %0.2f", salarioLiquido, descontoINSS, descontoSindicato);

    return 0;

}