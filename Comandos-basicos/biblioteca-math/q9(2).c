#include <stdio.h>
#include <math.h>
#include <locale.h>
#define G 9.81

/*Trajetória de um projétil com resistência do ar
Escreva um programa que calcule a trajetória de um projétil lançado com velocidade inicial v0 em um ângulo θ em relação ao solo, considerando a resistência do ar (aproximada por um fator de arrasto k). Use as seguintes equações para calcular as coordenadas x(t) e y(t) em função do tempo t:
(ver formulas em imagem em anexo, arquivo Trajetória de um projétil.png)
Onde:
v0 é a velocidade inicial (entrada do usuário).
θ é o ângulo de lançamento (entrada em graus e convertida para radianos).
k é o coeficiente de resistência do ar (entrada do usuário).
g é a aceleração da gravidade (use 9.81 m/s²).
t é o tempo (calculado ou fornecido pelo usuário)
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double v0, teta, k, t, x, y;

    //entrada
    printf("Digite a velocidade inicial do projétil em m/s: ");
    scanf("%lf", &v0);
    printf ("Insira o ângulo em relação ao solo: ");
    scanf("%lf", &teta);
    printf("Agora digite o coeficiente de resistência do ar: ");
    scanf("%lf", &k);
    printf("Por fim, insira o tempo que ocorre a trajetória: ");
    scanf("%lf", &t);

    //conversao de grau pra radianos
    teta = teta*(M_PI/180);

    //trajetoria em x
    x = ((v0*cos(teta))/k)*(1-pow(M_E,(-k*t)));
    //trajetoria em y
    y = ((v0*sin(teta))/k)+G/k*(1-pow(M_E,(-k*t)))-((G*t)/k);

    printf("A trajetória percorrida chegou ao fim nas seguintes coordenadas (%0.2lf - %0.2lf)", x,y);

    return 0;
}